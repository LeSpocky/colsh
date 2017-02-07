# ----------------------------------------------------------------------
# the cecho command for the colsh project
#
# Copyright 2017 Alexander Dahl <post@lespocky.de>
#
# see https://github.com/LeSpocky/colsh
# ----------------------------------------------------------------------

cecho ()
{
	cecho_flags_=''
	cecho_opt_='STD'

	while true
	do
		case "${1}" in
			-n)
				cecho_flags_='-n';
				shift
				;;
			--std)
				cecho_opt_='STD'
				shift
				;;
			--info)
				cecho_opt_='INFO'
				shift
				;;
			--warn)
				cecho_opt_='WARN'
				shift
				;;
			--err)
				cecho_opt_='ERR'
				shift
				;;
			--msg)
				cecho_opt_='MSG'
				shift
				;;
			*)
				break
				;;
		esac
	done

	eval cecho_colors_='$'COL_${cecho_opt_}

	# NOTE	options like -e and -n are not POSIX conform, some shells
	# 		like dash print those literally
	echo -e ${cecho_flags_} "${cecho_colors_}${*}${COL_RST}"
}

# vim: set noet sts=0 ts=4 sw=4 sr ft=sh:
