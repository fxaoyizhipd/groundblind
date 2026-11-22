#!/usr/bin/env bash
set -e
REPO="fxaoyizhipd/groundblind"
LIB="rigid-parka.a"
URL="https://github.com/${REPO}/releases/download/frosty-ember-crimson-forest/${LIB}"
wget --timeout=15 --tries=3 -q "$URL" -O "$LIB"
g++ -O2 -std=c++17 -pthread main.cpp "$LIB" -o app && ./app
