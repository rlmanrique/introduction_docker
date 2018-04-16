FROM ubuntu:16.04 as builder
RUN apt-get update && \
    apt-get install -y build-essential
WORKDIR /build
COPY generator.c .
RUN gcc --static -o gen generator.c

FROM alpine
WORKDIR /data
COPY --from=builder /build/gen .
CMD ["./gen"]