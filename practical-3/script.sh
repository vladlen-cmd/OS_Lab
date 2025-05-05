ps aux 

top -b -n 1

sudo apt install htop
htop

kill <PID>

kill 1234           # Sends SIGTERM
kill -9 1234        # Sends SIGKILL (force kill)

killall firefox

renice -n 5 -p 1234

jobs

bg %1

fg %1

./longtask &        # Starts in background

pgrep bash

strace -p <PID>
