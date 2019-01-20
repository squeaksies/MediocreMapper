# Mediocre Mapper Multi-Mapper Server setup

## What you need to start
 * the latest MMMM server files
 * install node.js from https://nodejs.org/en/
 * port forward a TCP port of your choosing. 17425 is default.
 * create a song in MediocreMapper and set up difficulties, offset and BPM


## Setting up the server
### config.json setup 
```
"folder" - Folder name of the song
"difficulty": - Difficulty to be used (Easy/Normal/Hard/Expert/ExpertPlus)
"port": - Port you'll be using
"password": - Password to the server, can be left empty for no password
```
### config.json example
```
{
	"folder": "The Other Side",
	"difficulty": "ExpertPlus",
	"port": 17425,
	"password": "967"
}
```

## Starting the server
 * copy the song from your Mediocre Mapper's /CustomSongs/ Directory into your Server's /Songs/ directory
 * set up the config.json as above
 * open up a command line and navigate to the folder containing server.js. Or shift + right click in the folder in Windows Explorer to and open up PowerShell
 * run command: `npm install`
 * run command: `node ./server.js`
 * all done!

## Other info
Server saves every 5 minutes, so at most 5 minutes of progress is lost in the case of a crash.

No more than one person using the same name can be in a session. sometimes this bugs out and there's an improper disconnect. Have server restarted after a save if you're unable to join with the same name and really don't wanna change it. or just change it.

Full or partial information can be supplied to the server by typing for example `node ./server.js --difficulty "ExpertPlus"`

