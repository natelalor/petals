# petals
readme will be here shortly :)

## goals
wanted to diversify my skillset
look more into game-development/design

## process
I've been learning computer science for multiple years now, and just recently I've started to think about game development. I grew up a gamer, and I wanted a chance to turn the tables and see how a game would be created. With that in mind, I waited for a break between my university assignments where I had some time to dig in and tackle this interesting new topic. I set into this project with some past knowledge of C++, CMake, as well as a lot of experience playing games and creative thinking. 

The first step was initial planning. I needed to think through how the game would look, what the user functionality would be like, and well, what the game would be! After a few days of brainstorming, I decided on a playful game style that would reflect my creative and enthusiastic side. I finalized what I wanted the game to be, and started to think about code structure. How would I actually bring this to life in C++? What IDE should I use? How do I use rendering integration with C++? CLion? In the past, I worked on a project where I used just the built-in C++ presentation method, but I really did not want to do that again. This is a much more complex game than that, and the past project was dozens of vertices all making up objects that acted together with specific styling... it was quite the endeavor and I wanted a) a different design style than that, and b) a more modern and smooth approach to C++ development in this way.

Obviously, as soon as one question was answered, 3 more were replaced. But I was loving this progression of work - I wanted to start from scratch and answer all the questions as I went. This is a fun side of coding that I found more enjoyable than I thought - This project was all mine, and I could go about this exactly how I wanted. Further, as I got more and more into the 'game development rabbit hole', I realized this side of coding integrated creativity a lot more than other coding. While I think I still prefer other coding use-cases, game development was a refreshing change. 

Next, I had to figure out what to pair with C++ to make visuals and a game presentation for the user. After some advice-seeking from peers, I spent a while using Xcode and Metal for MacOS rendering. This seemed approachable to me because I had just finished a project using Xcode & Swift, so there wasn't much dust to brush off. As I started working, however, more and more problems seemed to arise. Because I already had a predetermined look and style for my game in my head and sketched out, I realized Metal may not be the best solution. While it is a terrific graphics framework, I wanted something that was more customizable to fit my specific needs. So, after some time trying to make it work with Metal, I was back to the drawing board. 

Then, after many more hours looking into C++ methods of game development, I stumbled across SFML. While it was outdated, it seemingly was a perfect fit for C++ integration and how I wanted to structure my game. So, attempt number two was CLion and SFML.

Which worked a lot better! Until... it didn't.
I found resources that displayed sprite integration, which meant I could bring in some drawings of mine and use them as objects for my game. This is exactly what I wanted! Here's where problems arose:

---
**Issue:**

  my issue was that while I downloaded SFML successfully, the SFML linker support was for macOS-x86_64 instead of arm64. In other words, it supported the Intel chip for mac, but not M1 chip for mac. There were a TON of resources for Mac and SFML, and even Mac, SFML, and CLion ([here](https://remy-villulles.medium.com/compile-and-install-sfml-2-5-1-on-macos-with-clion-and-cmake-b4e52199db1c), [here](https://giovanni.codes/sfml-2-5-1-setup-on-macos-with-clion/), etc). But the problem was finding one which was arm64 compatible, or M1 compatible.

For reference, here is the error I was trying to solve on CLion: 
```
ld: symbol(s) not found for architecture arm64
clang: error: linker command failed with exit code 1 (use -v to see invocation)
```

  So, I had to figure out how to update the SFML compatibility to M1 chip. Fortunately, there was mention of how to do this. This wasn’t a new thing, SFML   + M1 ([here](https://en.sfml-dev.org/forums/index.php?topic=27867.0), [here](https://en.sfml-dev.org/forums/index.php?topic=27893.0), [here](https://www.reddit.com/r/sfml/comments/wg8upl/does_sfml_work_on_m1_mac_how_should_i_go_about/), [here](https://www.sfml-dev.org/tutorials/2.5/start-osx.php), and [here](https://www.youtube.com/watch?v=kusRtYC-wj4)), but most of the support was for other IDEs (Visual Studio, Xcode, etc). 

  **Some support articles almost got me there:**

  - SFML and Linux (which performed linking similarly, but I couldn’t figure out how to do the directory pathing it wanted me to do): [here](https://www.sfml-dev.org/tutorials/2.5/start-linux.php)

  **While other support articles did not:**

  - terrible website that claimed to have the issue solved: [here](https://www.appsloveworld.com/cplus/100/1151/undefined-symbols-for-architecture-arm64-m1-mac)

  - my exact issue on stackoverflow, left unsolved: [here](https://stackoverflow.com/questions/72837742/how-to-correctly-link-sfml-3-0-0-for-m1-mac-and-clion-via-cmake)

  - a similar issue on stackoverflow, left unsolved: [here](https://stackoverflow.com/questions/74563403/sfml-not-connecting-to-clion)

  **Finally, I found a video that did work:**

  - [here](https://www.youtube.com/watch?v=zjv4aGzFous)

  He shows you how to use Homebrew to install SFML, then finds that installation to point your compiler to it when you try to compile/run your C++ program.
  The problem with this is, obviously, this is a complete workaround to CLion and thus you'd just externally use the command line to compile/run your         program. In my case it is doable, but definitely more annoying. 
  
---

Now that we finally got through compiling with C++, M1, and SFML (although without directly using CLion, sad), we are finally getting into general game development and game structure!




## conclusion
how you felt about it?
