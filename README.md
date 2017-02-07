# colsh – colors for shell scripts

This is and should be some very lightweight files you can include in
shell scripts to enhance them with color. It was tested to work with
bash, zsh, and in busybox. It does not work with the POSIX compliant
dash.

## usage

You can use only the more basic file `colsh_definitions.inc` or
additionally the file `colsh_cecho.inc` which implements a command
cecho.

If you only include the definitions you can do color output in you shell
script like this:

```
echo -e "${COL_ERR}some error text${COL_RST}"
```

The available and useful macros are:

* COL\_RST for resetting
* COL\_INFO for starting to print in green
* COL\_WARN for starting to print in yellow
* COL\_ERR for starting to print in red
* COL\_MSG for starting to print in blue

If you include both files, you get a new command `cecho` which
understands the following options:

* -n        no linebreak (-n is passed to the real echo)
* --std     normal output, no special colors
* --info    green, informational output, for good news
* --warn    yellow output, for warning messages
* --err     red alert, for errors
* --msg     blue output, maybe for debug

See the file `example.sh` for some, well, examples.
