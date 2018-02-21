FROM ubuntu:16.04
RUN apt-get update && apt-get install \
	-y apache2 \
	-y apache2-utils \
	-y vim \
	&& apt-get clean \
	&& rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*
EXPOSE 80
CMD ["apache2ctl","-D","FOREGROUND"]
