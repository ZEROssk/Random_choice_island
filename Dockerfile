FROM golang:latest

RUN apt-get update

ADD ./main /go

CMD ["go", "run", "main.go"]
