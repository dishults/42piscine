ldapsearch -Q  "uid=z*" cn | grep '^cn:' |  sort -r -f | cut -d ':' -f 2
