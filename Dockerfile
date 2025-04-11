# Fetch ubuntu image
FROM ubuntu:22.04

# Install build tools
RUN apt-get update && \
    apt-get install -y wget build-essential cmake autoconf automake libtool

# Set the working directory inside the container
RUN mkdir /project

# Copy project into image
COPY src /project/src
COPY tests /project/tests
COPY CMakeLists.txt /project/CMakeLists.txt

# #Download and build CppUTest
RUN mkdir /project/tools/ && \
    cd /project/ && \
    wget https://github.com/cpputest/cpputest/releases/download/v4.0/cpputest-4.0.tar.gz && \
    tar xf cpputest-4.0.tar.gz && \
    mv cpputest-4.0/ tools/cpputest && \
    cd tools/cpputest && \
    cmake -DCPPUTEST_BUILD_TESTING=OFF -DCPPUTEST_EXAMPLES=OFF . && \
    cmake --build . && \
    cmake --install .

#Excute script 
RUN cmake ./project
RUN cmake --build .

ENTRYPOINT ["ctest", "--output-on-failure"]