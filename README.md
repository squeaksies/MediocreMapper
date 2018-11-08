# Fork of a fork of a 3D beatsaber song editor
![alt text](https://i.imgur.com/zimA0I6.png)
This is a fork of [EditSaberEnhanced by permissionBRICK](https://github.com/permissionBRICK/EditSaberEnhanced) which is a fork of  [EditSaber by Ikeiwa](https://github.com/Ikeiwa/EditSaber). Previously assisting with EditSaberEnhanced, I made this mediocre thing as a set of feature additions on EditSaberEnanced.

## Next up:
 * Multiplayer
 * BPM/Offset Tapper
 * Metronome

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
