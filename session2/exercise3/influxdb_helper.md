#

docker exec -it influxdb influx

CREATE DATABASE statsdemo
SHOW DATABASES
USE statsdemo
INSERT cpu, host=serverA value 0.64
SELECT * FROM cpu

