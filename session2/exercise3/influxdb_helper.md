#Instructions to create the table in influxdb

docker exec -it influxdb_compose influx

CREATE DATABASE random_numbers
SHOW DATABASES
USE random_numbers
INSERT cpu,host=serverA value=0.64
SELECT * FROM cpu

