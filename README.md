# silicon valley startup idea
<p align="center">
    <a href="https://img.shields.io/github/last-commit/gunbux/hacknroll22" alt="Last Commit">
        <img src="https://img.shields.io/github/last-commit/gunbux/hacknroll22" /></a>
    <a href="https://img.shields.io/github/license/gunbux/hacknroll22" alt="License">
        <img src="https://img.shields.io/github/license/gunbux/hacknroll22" /></a>
    <a href="https://img.shields.io/tokei/lines/github/gunbux/hacknroll22" alt="Lines">
        <img src="https://img.shields.io/tokei/lines/github/gunbux/hacknroll22" /></a>
</p>

## Inspiration
In 2017, a startup named [Juicero](https://en.wikipedia.org/wiki/Juicero) raised $120 million in startup funding for essentially a machine that squeezes. In 2022, we aim to recreate it's success by scamming a hackathon prize.

## What it does
It squeezes juice out of a packet.

### How it works
- The Arduino Uno is connected to a server which will stab a hole into the packet and a dc motor connected to a string which will squeeze the juice packet.
- The Arduino waits for a signal from the esp32 board before it turns the machine on.
- The signals are connected to a webserver created by the esp32 board which listens for POST requests
- First the servo motor pierces the packet drink with a needle.
- Then, the 12V motor reels the string in from behind the packet, tightening it to squeeze the juice out.
- (Optional) Using an Ngrok tunneler, we can expose the localip of the esp32 to the internet, so that calls can be made anywhere
- On the frontend web application, we make an API POST request to the esp32 bot (via local ip)
- Once received, the esp32 board turns the motor on and off.

## How we built it
### Software Components
- React App written in ReactJS
- Hardware code written in C

Libraries Used
- Material UI
- Axios
- Create-React-App

### Hardware Components
- Esp32
- Arduino Uno

## Challenges we ran into
- We had a couple of ideas for the physical mechanisms which did not pan out (a giant claw squeezing the packet -- grip strength was too long), and had to rethink how it was going to work. After brainstorming, we decided to take inspiration from the brilliant invention of the noose.

## Accomplishments that we're proud of
- Getting the motor to reliably squeeze juice out of a packet drink
- Getting a esp32 to respond to API calls
- Getting the esp32 to communicate with the Arduino Uno
- Getting a actual working prototype within the time constraints
- Being able to flexibly adapt the designs based on the limited materials available

## What's next for silicon valley startup idea
- Every home needs one because it's awesomely useless
- We can put more ads in the web page.
