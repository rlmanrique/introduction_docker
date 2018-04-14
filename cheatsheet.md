# Docker Cheatsheet

## Build

docker build -t <repo/name>:version .

docker build -t <repo/name>:version --target builder . # Build the specified container in a multistage Dockerfil

## Run
docker run <image>   ## Run container with specified image
docker run -dit --name <name> alpine # Run alpine image with container name <name> and dettached but with a console

docker exec <container-id> <command> # Run command in the container
docker exec -it --name <name> /bin/bash  ## Open a console in the container

## List

### List all running containers

docker ps
docker ps -a
docker container ls                                
docker container ls -a

## Lifecycle

docker inspect <container_id>
docker logs <container_id>

docker pause <container_id>
docker unpause <container_id>
docker container stop <container_id>           # Gracefully stop the specified container

docker start <container_id>
docker stop <container_id>
docker stop -f <container_id>

docker container kill <container_id>         # Force shutdown of the specified container
docker container rm <container_id>        # Remove specified container from this machine
docker container rm $(docker container ls -a -q)         # Remove all containers

## Images

docker image ls -a                             # List all images on this machine
docker image rm <image id>            # Remove specified image from this machine
docker image rm $(docker image ls -a -q)   # Remove all images from this machine

docker image inspect <image id>

## Networking

docker network create --driver <bridge/host/mcvlan/overlay> network_name
docker network ls
docker network inspect <network>
docker run ... --network <network_name>


## Repository

docker login             # Log in this CLI session using your Docker credentials
docker tag <image> username/repository:tag  # Tag <image> for upload to registry
docker push username/repository:tag            # Upload tagged image to registry
docker run username/repository:tag                   # Run image from a registry