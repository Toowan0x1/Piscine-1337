#!/bin/sh

ifconfig | cut -c2- | grep "^ether" | cut -d ' ' -f 2
