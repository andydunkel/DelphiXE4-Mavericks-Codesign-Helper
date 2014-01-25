DelphiXE4-Mavericks-Codesign-Helper
===================================

Small command line utitlity that calls the codesign tool with the --deep option, which is needed on Mavericks.

## Why? ##

If you want to compile and sign a Firemonkey application from Delphi-XE4 it fails, because the --deep option is missing. So I wrote this tool as a "replacement" for the original codesign tool.

## How? ##

First create a copy of your original codesign tool in <code>/usr/bin/</code> named "codesign_original". Then copy this "codesign" binary into <code>/usr/bin/</code>. After that, the --deep option is added automatically when its missing.

## Disclaimer ##

Use at your own risk. :-)
