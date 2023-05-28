#!/bin/sh

find . -name '*.sh' -exec basename {} \; | rev | cut -c4- | rev
