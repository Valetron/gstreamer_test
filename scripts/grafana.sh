#!/bin/sh

docker run --network host -d --name=grafana grafana/grafana > grafana.log 2>&1 &

