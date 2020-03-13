# ----------------------------------------------------------------------
# color definitions for the colsh project
#
# Copyright Alexander Dahl <post@lespocky.de>
#
# see https://github.com/LeSpocky/colsh
# ----------------------------------------------------------------------

ESC_START='\033['
ESC_SEP=';'
ESC_END='m'

COL_SET_BOLD='1'

COL_RESET_ALL='0'

COL_FG_BLACK='30'
COL_FG_RED='31'
COL_FG_GREEN='32'
COL_FG_YELLOW='33'
COL_FG_BLUE='34'
COL_FG_CYAN='36'
COL_FG_LIGHT_GRAY='37'
COL_FG_DEFAULT='39'

COL_FG_DARK_GRAY='90'
COL_FG_BR_YELLOW='93'
COL_FG_BR_BLUE='94'
COL_FG_WHITE='97'

COL_BG_BLACK='40'
COL_BG_YELLOW='43'
COL_BG_DEFAULT='49'

COL_RST="${ESC_START}${COL_RESET_ALL}${ESC_END}"
COL_INFO="${ESC_START}${COL_FG_GREEN}${ESC_END}"
COL_WARN="${ESC_START}${COL_FG_BLACK}${ESC_SEP}${COL_BG_YELLOW}${ESC_END}"
COL_ERR="${ESC_START}${COL_SET_BOLD}${ESC_SEP}${COL_FG_RED}${ESC_END}"
COL_MSG="${ESC_START}${COL_FG_CYAN}${ESC_END}"
COL_STD="${ESC_START}${COL_RESET_ALL}${ESC_SEP}${COL_BG_DEFAULT}${ESC_END}"

# vim: set noet sts=0 ts=4 sw=4 sr ft=sh:
