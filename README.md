# Project Journey: Sai_LineFollowerBot

## Day X (19-Oct-25 and 20-Oct-25): Ordering the Disorder  
Initially, when the message was dropped in the group, I thought we had to make a Maze Solver Bot, as previously the links and resources were based on Maze Solver only. So, I saw and tried to learn different types of algorithms to solve a maze — how to make one and which one has higher speed and efficiency. I finalized writing a code (making a bot) based on **Dijkstra’s Algorithm**, which seemed averagely better.  

At that time, I realized we did not need to make a Maze Solver Bot but a bot on **LINE FOLLOWER** instead.  

Then, after I realized it, the first thing that came to mind was to get the code from GPT and understand it line by line and word by word so that I could understand what was happening in the code and make myself capable of explaining it to anyone on my own. But then I kept this thing as a backup or final plan if nothing worked out and the deadline was very near, because it’s the easiest way out. However, I thought, *let’s give it a shot from scratch.*  

Then I watched many, many videos based on Arduino coding on YouTube — more than 9–10 videos about how to do it, what to do, everything. From the very basics — what it is and everything. I didn’t learn much through videos, but I’m pretty sure I learned a rough structure of what Arduino coding is and how to do it in a strange (not clear) way.  

---

## Day 1 (21-Oct-25): Start From Scratch  
Today I started by asking GPT about IDEs and all. That’s where I came across a website named **Wokwi**. It is such a productive website where I can code on the left and arrange the components accordingly to see the output of my code.  

Then I asked GPT to give me **15 mini Arduino projects** ranging from very basic to early moderate. I started to do them from the basics. At the start, I asked for the answers, then I was able to do a few things on my own.  

Starting with turning on an LED, then making it blink using delay, controlling it with a push button, and then making it a toggle button, making a traffic-light-like combination (using multiple LEDs), making a lock using multiple push buttons, learning how to use a photo sensor, creating a Knight Rider effect, etc.  

This gave me a strong basic foundation on how to code (along with how to arrange the components and what connections to make where) and also gave me the confidence that I can write Arduino code on my own.  

---

## Day 2 (22-Oct-25): Starting To Tackle the Actual Problem  
I continued the remaining mini projects out of the 15 given by GPT and somehow completed them just like a blabbering speech. Then, after gaining a considerable amount of basic knowledge, I came to the main problem — **The Line Follower Bot**.  

I gave it a very long thought — about how its logic would be — and kept thinking continuously. Then I tried to modify the actual problem statement to a simpler one, which was to use 3 IR sensors and connect them to an LCD, which would print what to do next (i.e., if the right IR sensor detects the line, then the LCD would print *“Turn Right”*, and so on). Then I did the very same thing with 5 sensors and made the LCD print what to do.  

---

## Day 3 (23-Oct-25): Summing It Up and Finishing  
Today I started by adding 4 motors corresponding to each wheel of the bot. But I kept the number of IR sensors to 3 and tried to make it work in a very simple way, with just 3 commands tuning the motors accordingly (those are: go straight, left turn, right turn).  

It took a long time with multiple errors, a bit of inefficiency in code writing, and a few mistakes in assembling the components correctly, but it finally worked after quite a while.  

At last, coming to our actual problem statement of using 4 motors and 5 IR sensors — this separately took me a very long time to think through how the logic would work. It was simple for the middle and extreme sensors (similar to the one with 3 sensors), but making the bot turn *just enough* when the sensor between the extreme and middle one detects the line seemed tricky.  

After a long time of thinking, I thought of asking GPT for help, but after multiple tries with GPT and other AIs, I only ended up getting the same result: *“Use encoders.”* But that was not allowed.  

Then, after a break and long thought, it came to my mind that restricting the time limit of turning could make it a half turn instead of a full one, which can be easily done using the `delay()` function. But the timing required for that particular turning (either half turn or full turn) can only be determined after multiple physical experiments, which cannot be done by me for now — at least until maybe I come to IIT and you can provide me with the required materials. Yes, I can do this coding more precisely with perfect timings using the `delay()` function.  

So, to further proceed with my code, I arbitrarily chose 2 values — **200 ms** for a half turn (~45°) and **400 ms** for a full turn (~90°). With this, I finally ended up making my **Line Follower Bot.**  

---

## Personal Insights 
*I personally found it very interesting as I learned a new thing. I would constantly improve my knowledge in this domain, and giving me such projects and further work consistently would help me a lot in gaining knowledge quickly.*  

*Particularly, talking about this project — after completing it and just seeing it work smoothly, and knowing that I did not use any AI even once while doing this work, felt amazing. I used it only to generate more questions (projects) for gaining confidence and understanding how to code in this. After learning it, I didn’t feel the need for GPT and even managed to solve many errors that arose during coding. This made me feel proud and satisfied.*  
