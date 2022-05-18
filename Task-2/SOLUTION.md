mkdir Coordinates-Location <br/>
mkdir North <br/>
cd North <br/>
gedit NDegree.txt <br/>
rgedit NMinutes.txt <br/>
gedit NSeconds.txt <br/>
gedit NorthCoordinate.txt <br/>
cp NorthCoordinate.txt /home/reaper/Coordinates-Location <br/>
cd <br/>
cd Coordinates-Location <br/>
mv NorthCoordinate.txt North.txt <br/>
gedit NorthCoordinate.txt <br/>
mkdir East <br/>
cd East <br/>
gedit EDegree.txt <br/>
gedit EMinutes.txt <br/>
gedit ESeconds.txt <br/>
gedit EastCoordinate.txt <br/>
cp EastCoordinate.txt /home/reaper/Coordinates-Location <br/>
cd <br/>
cd Coordinates-Location <br/>
mv EastCoordinate.txt East.txt <br/>
mv /home/reaper/North /home/reaper/Coordinates-Location <br/>
gedit Location-Coordinate.txt <br/>

git clone "https://github.com/BlackReap-er/amfoss-tasks" <br/>
cd amfoss-tasks <br/>
git add . <br/>
git commit -m "Added" <br/>
git push <br/>
