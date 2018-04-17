#

docker exec -it influxdb influx

CREATE DATABASE random_numbers
SHOW DATABASES
USE random_numbers
INSERT cpu, host=serverA value 0.64
SELECT * FROM cpu

