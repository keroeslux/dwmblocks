if [ -d "/proc/acpi/button/lid" ]; then
    if [ -d "/sys/class/power_supply/BAT0" > /dev/null ]; then
        B0=$(cat /sys/class/power_supply/BAT0/capacity)
        echo "«« ${B0}% battery »»"
    else
        if [ -d "/sys/class/power_supply/BAT1" > /dev/null ]; then
            B1=$(cat /sys/class/power_supply/BAT1/capacity)
            echo "«« ${B1}% battery »»"
        else
            echo "Cannot find power supply."
        fi
    fi
else
    echo "<>"
fi
