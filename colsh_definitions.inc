# ----------------------------------------------------------------------
# color definitions for the colsh project
#
# Copyright 2016 Alexander Dahl <post@lespocky.de>
#
# see https://github.com/LeSpocky/colsh
# ----------------------------------------------------------------------

ESC_START='\033['
ESC_SEP=';'
ESC_END='m'
COL_RST="${ESC_START}0${ESC_END}"

COL_BOLD='1'

COL_FG_RED='31'
COL_FG_GREEN='32'
COL_FG_BR_YELLOW='93'
COL_FG_BR_BLUE='94'

COL_BG_BLACK='40'
COL_BG_DEFAULT='49'

COL_INFO="${ESC_START}${COL_FG_GREEN}${ESC_END}"
COL_WARN="${ESC_START}${COL_BOLD}${ESC_SEP}${COL_FG_BR_YELLOW}${ESC_SEP}${COL_BG_BLACK}${ESC_END}"
COL_ERR="${ESC_START}${COL_BOLD}${ESC_SEP}${COL_FG_RED}${ESC_END}"
COL_MSG="${ESC_START}${COL_FG_BR_BLUE}${ESC_END}"

# vim: set noet sts=0 ts=4 sw=4 sr ft=sh:
