if [[ -z $(users) ]]; then
    systemctl start vacant.target
fi
