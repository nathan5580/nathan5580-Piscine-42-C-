#!/bin/sh
find . -name "*.sh" | cut -d . -f2 | cut -d / -f2
