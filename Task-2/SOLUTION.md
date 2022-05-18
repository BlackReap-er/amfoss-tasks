mkdir Coordinates-Location
mkdir North
cd North
gedit NDegree.txt
rgedit NMinutes.txt
gedit NSeconds.txt
gedit NorthCoordinate.txt
cp NorthCoordinate.txt /home/reaper/Coordinates-Location
cd
cd Coordinates-Location
mv NorthCoordinate.txt North.txt
gedit NorthCoordinate.txt
mkdir East
cd East 
gedit EDegree.txt
gedit EMinutes.txt 
gedit ESeconds.txt
gedit EastCoordinate.txt
cp EastCoordinate.txt /home/reaper/Coordinates-Location
cd
cd Coordinates-Location
mv EastCoordinate.txt East.txt
mv /home/reaper/North /home/reaper/Coordinates-Location
gedit Location-Coordinate.txt

git clone "https://github.com/BlackReap-er/amfoss-tasks"
cd amfoss-tasks
git add .
git commit -m "Added"
git push
