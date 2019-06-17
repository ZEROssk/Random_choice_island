#!/bin/bash
docker build ./ -t rci_n/zero:latest
docker run --name rci_zero -it --rm rci_n/zero:latest
