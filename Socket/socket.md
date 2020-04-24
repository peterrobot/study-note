# A great step ahead socket

Thanks tutorial form [this](https://www.cnblogs.com/L-hq815/archive/2012/07/09/2583043.html) website.

## Catalogue

[TOC]

## Basic facts about socket

When we talk about "socket", we often refer to the way in which use Unix **file descriptor** to communicate across different devices.
> When some great Unix users(hacker) speaks of "everything in Unix is file", they're actually mean that every programme in Unix is always reading or writing a **file descriptor** whenever they're executing every kinds of I/O operation(really every kinds operation of files in place from network to local disk).
By the way, we use `socket()` through system to get **socket descriptor** and use `send()` along with `recv()` to operate the socket.

There are plenty of socket in fact. But in this case, let's pay more attention on **Internet socket**.
Which is frightening, there are more kinds of socket out of the socket we use---**stream sockets**&**datagram sockets**(maybe raw sockets as well). The main difference between them is whether connection is bidirectional to ensure data are placed in order. In detail, **stream sockets** use the protocol called **TCP**(The Transmission Control Protocol), the one in "TCP/IP", while **datagram sockets** use **UDP**(User Datagram Protocol). Though we say "datagram sockets" do not contain a bidirectional connection, receiver will still sent a "ACK" package to represent the data is received properly.

## Basic network theory

First, we meet **Data Encapsulation** which is extremely important. Here is what it is mainly about: A package is first being repack over and over again until it goes to the physical layer. Then it is sent to the receiver and unfolded to the origin data. To be specifically, a socket is packed in the order of "TFTP", "UDP", "IP" and so on.
Then what is the stage. That is probably theory fundamental to all the network theory---**Layered Network Model**. Here is the seven layers of it.

1. Application
2. Presentation
3. Session
4. Transport
5. Network
6. Data Link
7. Physical

In fact, usually not all layers are maintained in specific platform and it's often the case that only part of the layers exist or some layers are combined into one.

## Structure

## Local transfer

## IP address

## Main functions
