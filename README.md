# Fork of a fork of a 3D beatsaber song editor
![alt text](https://i.imgur.com/zimA0I6.png)
This is a "fork" of [EditSaberEnhanced by permissionBRICK](https://github.com/permissionBRICK/EditSaberEnhanced) which is a "fork" of  [EditSaber by Ikeiwa](https://github.com/Ikeiwa/EditSaber). Previously assisting with EditSaberEnhanced, I made this mediocre thing as a set of feature additions on EditSaberEnanced.

## No longer maintained
 
## Update Mk4
### New Stuff
* **Lightmap** v2 integration
* **Cat** mode. swirly eyed cats are dot notes. Comes with cat hit sounds
* **Metronome** use BPM blocks to configure downbeat
* **Bongo Cat** companion that tests your songs
* **No lighting mode** so you can actually load giant event files
* **Mapping Extensions** support, minus precision walls. But it's got 6 lane, precision placement and angles.
* **Song Loader Fields** `contributors`, `noteJumpSpawnBeatOffset`, `requirements`, `suggestions`, `information`, `warnings`, `characteristics`, `customEnvironment`, `difficultyLabel`
* **OSU Importer** place an .osz file in your song folder before loading the song to import BPM Changes
* **Redo** it's on ctrl+shift+z, i didn't want ctrl+y
* **Unlock Strobe/Laser Limits** note: i'll hate you forever if you press this
* **Edit lock** it's like holding alt, but all the time. Mainly for mapping extensions
* **BPM Overhaul** now adjustable placement to the millisecond and offers beat division modifiers
* **Stacked Notes Detector** i don't even know how you people make these, but here's a detector
* **Autosave Recovery** Now in editor
* **Automatic Square Image** detector and corrector
* **WIP Folder** Automatic swap over to WIP folder. If you had previously manually done this. you'll need to swap back to normal.

### Fixes and improvements
* **In place note editing** No more need to scroll to a note to move it. Alt+RMB
* **Camera Speed** No longer tied to framerate
* **Editor Settings** No longer only saves on song exit.
* **Play and Revert** Hold space and let go. no need to press the stop button anymore.
* **Bookmark Creation** No longer hijacks your cursor when you place them. Also esc cancels bookmarks now
* **More Bookmark fixes** Bookmarks no longer get screwed on editor scale changes
* **Milliseconds** now added to song time
* **Selection counter** shows how many items are selected
* **Copy-Paste** While song playing
* **Strobes** now obey BPM and work while song is playing
* **Stats Panel** will now either apply to the whole map, or selected notes/events
* **Autoupdater** is now able to update itself. This is the last manual update.
* **Wiping all your songs** should now no longer happen occasionally.
* **Freeek** no longer haunts the bottom of your screen in portrait/square orientations


### Other stuff, and bad things
* **ChromaToggle/ChromaLite** support dropped. Still accessible via beta setting, but will not be maintained further.
* **MediocreLoader** support dropped. use fpfc to explore your mapping in game. Will look into fixing this later, but it's broken for now.
* **No more source updates** due to sensitive-ish code, the source will no longer be updated. 
* **New Icon** since we're not ChromaToggle anymore, we have a new icon. All hail our cat eared overlords.
* **Donation page** I have one now, bottom of settings.

Now go find me some bugs. Also there's a bunch of stuff i probably left out. i don't log it well. 

## Update MC3Rev1:
* Audio now stops playing if disconnected from MMMM server abruptly
* Backups of difficulty .json files are made upon joining an MMMM server
* Surprise for the 22nd to the 28th

## Update Mk3
 * Mediocre Mapper Multi-Mapper (multiplayer) (henceforth referred to as MMMM) 
 * [Readme for MMMM server](https://github.com/squeaksies/MediocreMapper/blob/master/ServerReadme.md)
 * Trackpad support
 * Warnings for common file name/type errors
 * Swap waveform to lighting track
 * Open song folder button
 * Copy-crash fixed (again)
 * New slice sounds
 * Middle-mouse now usable while song is being played
 * MediocreLoader updated to Beat Saber version 0.12.1
 * Waveform now 1/2 the length for performance reasons
 * bookmarks now less buggy (kinda, some have reported not being able to interact with bookmarks)
 * on that note, pressing [B] or creating a new bookmark while on top of one deletes it.
 * backspace isn't retarded anymore
 * some other bugs fixed probably
 * I have like 10 real friends on snapchat, 20 followers on insta, and I strictly use my Facebook for telling randos to kill themselves. They all fucking love me, do the 300 friends you have on Facebook even message u? How many have you met irl? If its over 10 I guess you win.

## Update Mk2Rev1:
 * Custom Events fixed
 * Mirror Fixed
 * Temporary/read only song loading added
 * Copy-crash fixed
 * note sorting fixed
 * some other bugs fixed probably
 * buggy bookmarks
 * new bugs added

## Update Mk2:
 * Performance update: Number of notes/events/length of song no longer/lightly plays a role in performance
 * Ctrl + click selection overhauled to box select
 * Alt + scroll to adjust wall length
 * Walls now extend lower to show there is no accommodation for mid-level notes on crouch walls.
 * Slice sound timing adjusted(sorry quack mappers, not yet)
 * Sort songs by Name/Time
 * Search bar for song selection
 * Autoupdater
 * Companion plugin "MediocreLoader" to start songs within Beat Saber. Automatically installed from within editor. 
 * Strobe lighting placement
 * RGB events added for ChromaToggle, consult in-editor manual for keybinds
 * More modes for ChromaToggle
 * Ctrl+F now correctly listed as fake walls hotkey
 * Editor scale works again
 * Nice Environment looks like Nice Environment
 * Esc opens menu in editor
 * a bunch of other bug fixes, i don't keep a good log of this stuff so it's hard to remember. it's like a game, an easter egg hunt, go find stuff i forgot to say here.

## Features not included from EditSaberEnhanced
 * Preview event on \[V]
 * Drag select with \[N]/\[L]
 * Option to disabled ghost event block
 
## Big changes and stuff that doesn't really fit too well with the below stuff. In otherwords, things I wanted to be at the top.
 * Editor supports ChromaToggle. A mod by Skykiwi, which offers up to 5 colors to be used in a map. [Discord Link for further details](https://discord.gg/xwrWzfj)
 * Settings are now persistent and are saved between editor closing/new map loading.
 * Variable BPM support with 3 decimals of accuracy. This is not compatible with the the "ModdedEditSaber" Variable BPM Editor.
 * Vision block detector now built into editor. If vision block exceeds 5% of the map, the editor will begin complaining.
 * Editor will complain upon placement of 2-wide center walls, or 3 wide walls.
 * Audio is no longer muted on window focus lost
 * Discord Rich Presence support.

## Map Selection Menu Changes
 * Songs from in-game-downloader are now filtered out.
 * Map selection screen now offers configuration for autosaves
 * Favorites added to Map Selection screen. Favorite maps are indicated by a cat and are automatically put at the top. Newly created songs are automatically favorited.
 * Guide by Awfulnaut now linked on the map selection page for starting mappers.
 * Reset song folder button now changed to clear settings.
 * One Saber Mode option now present in menu.
 * Note jump speed now editable from menu.
 * Map copying to other difficulties.
 
## Editing Menu Changes
 * Song and Note volume sliders on menu
 * New lighting panel on the right side \[Still uses tab to open]
 * Old lighting panel replaced with Error Checker \[Open with shift+tab]
 * Statistics panel added and opened from Error Checker
 * Timestamp added in top right, showing position in song.
 * Progress Timer in bottom right, showing approximate total time spent on song.
 
## Error Checker
Min Time and Max Time specifies time of effect from a note.
 * Double Same direction checker (Intended for streams)
 	* Time to look for a double same direction hit after each hit.
 * Vision Block Detector
 	* Time vision blocks are detected after an eye-height level block.

 
## Hotkey additions and control changes
 * WASDF for lighting controls
 * Alt + WASD to edit hovered events
 * Alt + scrollwheel to change hovered laser speeds
 * Ctrl + Z for undo (undoes anything)
 * Walls are now placed with two left clicks
 * Shift + scroll for direction changes removed
    * **use WASDF or numpad to rotate notes**
 * shift + middle click to quick delete
 * Delete deletes all selected blocks
 * Arrow keys can move events
 * Notes now take priority over walls when deleting
 * Ctrl + click to select large sections
 * Middle mouse swaps red/blue for events
 * Ctrl + F to swap between normal, negative width and negative length walls

## ChromaToggle Controls
 * 1 - Red
 * 2 - Blue
 * Q - Magenta
 * E - Green
 * R - Grey

## Statistics Panel
 Offers the following data about your map, with defining tooltips and value suggestions
 * Note Count
 * Notes Per Second
 * Bomb Count
 * Wall Count
 * Lighting Count
 * Red/Blue Ratio
 * Vision Block Percentage
 * Aggressive Vision Block Percentage
 * % usage of each row.
 
 and uhhh some other stuff I probably forgot. I can't wait to make 50 commits to the repo just to update this h\*cking readme.

## Future plans
* Overhaul box select.
* Metronome
* Hitsounds only on one color
* Bad pattern detection
* Timing Track
* Lightmap Integration
* Bookmarks for collaborations 
