# Use an official Python runtime as a parent image
FROM python:3.5.2-slim

# Set the working directory to /app
WORKDIR /app

# Copy the current directory contents into the container at /app
ADD . /app

# Run app.py when the container launches
ENTRYPOINT ["./read_and_send"]
