FROM ubuntu:24.04
RUN apt update
RUN DEBIAN_FRONTEND=noninteractive apt install -y build-essential gdb git python3 python3-pip python3-venv
RUN python3 -m venv /toolchain/build-venv
ENV PATH="/toolchain/build-venv/bin:$PATH"
RUN pip install cmake