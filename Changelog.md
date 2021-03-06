# sfTheora Changelog

## 1.4.0

- Renamed SFMLTheora to sfTheora.
- Changed namespace to sftheora.
- Changed naming conventions of functions to camelCase.
- Added error functions.
- Allowed loading videos directly from constructor.
- Moved MemoryLoader to MemoryLoader.h and MemoryLoader.cpp.
- Removed Init and Release functions. (Moving them into the constructor and destructor)
- Renamed LoadClip to load.
- Added getDuration() and getTime() to Video class.
- Added bound-checking to seek (in Video class).
- Fixed compatibility with latest SFML version (mainly naming conventions).
- Dropped SFML 1.6 support.
- Fixed compatibility with latest libtheoraplayer revision (insertData parameter).

## 1.3.5

- Included libtheoraplayer's header files in distribution.

## 1.3.4

- Changed NbSamples (for sf::SoundStream::Chunk) to SampleCount.
- Changed OnSeek(sf::Uint32) to OnSeek(sf::Time).
- Added function overload, Update(sf::Time) in Video class.

## 1.3.3

- Moved OnGetData and OnSeek in AudioInterface class from public to private.
- Renamed filepath to filename in Video class.

## 1.3.2

- Added `#include <cstring>` to Video.cpp to fix "memset not declared" when compiling with GCC.

## 1.3.1

- Changed SFMLTheora debug configurations to load libtheoraplayer debug lib.

## 1.3.0

- Changed SFMLTheora into a static library.

## 1.2.9

- Fixed support for SFML 1.6.

## 1.2.8

- Minor fixes in Video class (related to the new image and texture changes in SFML 2) to work with the latest svn version of SFML 2 (as of 22/8/2011).

## 1.2.7

- Made some minor changes to make SFMLTheora work with the latest svn version of SFML2 (As of 24/5/2011).

## 1.2.6

- Replaced SetPlayingOffset in seek (AudioInterface.cpp) with Stop and Play to restore support for SFML1.6.

## 1.2.5

- Fixed friend class error and deleting void* warning.

## 1.2.4

- Fixed audio stuttering problem and made some minor changes to the code.

## 1.2.3

- Fixed some audio syncing problem.

## 1.2.2

- Made some minor changes to the Audio Interface class.

## 1.2.1

- Added OnSeek back for SFML2 support (I accidentally removed it thinking it was an extra function that isn't used since I'm using SFML1).

## 1.2.0

- Added Play(), Pause(), Stop(), and Seek() to the Video class. These functions allows the user to play, pause, stop, and seek the video while keeping the audio in sync.

## 1.1.1

- Init() is now automatically called in LoadClip() if it hasn't been called yet.
