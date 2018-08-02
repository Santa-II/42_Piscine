ldapsearch -H ldap://ldap-master.42.us.org "(sn=*bon*)" | grep sn | sed '/^[[:blank:]]*#/d;s/#.*//' | wc -l | bc
