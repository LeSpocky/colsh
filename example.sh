#!/bin/bash

. ./colsh_definitions.inc
. ./colsh_cecho.inc

cecho -n '['
cecho -n --info '✔'
cecho -n '] '
cecho 'okay …'

echo -e "[${COL_ERR}✘${COL_RST}] fail …"

cecho --std 'std'
cecho --info 'info'
cecho --warn 'warn'
cecho --err 'err'
cecho --msg 'msg'
