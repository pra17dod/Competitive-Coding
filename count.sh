#!/bin/bash

src=${1:-"."}
ext=${2:-"what"}
find ${src} -type f -name "*.${ext}" | wc -l