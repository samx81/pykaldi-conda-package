#!/bin/bash
BLD_PATH=/usr/local/conda-bld/linux-64/

git pull origin master
conda build -c coml --user coml --token $CONDA_TOKEN --skip-existing $1
