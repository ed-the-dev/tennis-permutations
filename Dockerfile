FROM gcc:latest

RUN apt-get update

RUN apt-get -y install build-essential gdb