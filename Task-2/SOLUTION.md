reaper@ubuntu:mkdir Coordinates-Location
reaper@ubuntu:~$ mkdir North
reaper@ubuntu:~$ cd North
reaper@ubuntu:~/North$ gedit NDegree.txt
reaper@ubuntu:~/North$ gedit NMinutes.txt
reaper@ubuntu:~/North$ gedit NSeconds.txt
reaper@ubuntu:~/North$ gedit NorthCoordinate.txt
reaper@ubuntu:~/North$ cp NorthCoordinate.txt /home/reaper/Coordinates-Location
reaper@ubuntu:~/North$ cd
reaper@ubuntu:~/amfoss-tasks$ cd
reaper@ubuntu:~$ cd Coordinates-Location
reaper@ubuntu:~/Coordinates-Location$ mv NorthCoordinate.txt North.txt
reaper@ubuntu:~/Coordinates-Location$ gedit NorthCoordinate.txt
reaper@ubuntu:~/Coordinates-Location$ mkdir East
reaper@ubuntu:~/Coordinates-Location$ cd East 
reaper@ubuntu:~/Coordinates-Location/East$ gedit EDegree.txt
reaper@ubuntu:~/Coordinates-Location/East$ gedit EMinutes.txt 
reaper@ubuntu:~/Coordinates-Location/East$ gedit ESeconds.txt
reaper@ubuntu:~/Coordinates-Location/East$ gedit EastCoordinate.txt
reaper@ubuntu:~/Coordinates-Location/East$ cp EastCoordinate.txt /home/reaper/Coordinates-Location
reaper@ubuntu:~/Coordinates-Location/East$ cd
reaper@ubuntu:~$ cd Coordinates-Location
reaper@ubuntu:~/Coordinates-Location$ mv EastCoordinate.txt East.txt
reaper@ubuntu:~/Coordinates-Location$ mv /home/reaper/North /home/reaper/Coordinates-Location
reaper@ubuntu:~/Coordinates-Location$ gedit Location-Coordinate.txt

reaper@ubuntu:~$ git clone "https://github.com/BlackReap-er/amfoss-tasks"
reaper@ubuntu:~$ cd amfoss-tasks
reaper@ubuntu:~/amfoss-tasks$ git add .
reaper@ubuntu:~/amfoss-tasks$ git config --global user.email "gayathridevi0019@gmail.com"
reaper@ubuntu:~/amfoss-tasks$ git config --global user.name "BlackReap-er"
reaper@ubuntu:~/amfoss-tasks$ git commit -m "Added"
reaper@ubuntu:~/amfoss-tasks$ git push
