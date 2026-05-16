# Computer Networking Fundamentals: Q&A Guide

A comprehensive, structured reference guide covering essential concepts of computer networks, data link layer functionalities, error control mechanisms, and the OSI model layers.

---

## Table of Contents
1. [Core Networking Concepts](#1-core-networking-concepts)
2. [Network Performance & Reliability](#2-network-performance--reliability)
3. [Protocols & Design Issues](#3-protocols--design-issues)
4. [Data Transmission & Multiplexing](#4-data-transmission--multiplexing)
5. [The OSI Reference Model](#5-the-osi-reference-model)
6. [Physical Layer & Transmission Media](#6-physical-layer--transmission-media)
7. [Error Detection & Correction](#7-error-detection--correction)
8. [Data Link Layer & Framing](#8-data-link-layer--framing)
9. [Flow & Error Control (ARQ)](#9-flow--error-control-arq)
10. [Miscellaneous Networking Terms](#10-miscellaneous-networking-terms)

---

## 1. Core Networking Concepts

### Q1: What is a Network?
A network is a collection of devices (nodes) connected by physical media communication links. Recursively defined, a network is a connection of two or more nodes by a physical link, or two or more networks connected by one or more nodes.



### Q2: What is a Link?
At the lowest physical level, a network consists of two or more computers directly connected by a physical medium such as coaxial cable, twisted-pair, or optical fiber. This physical medium is called a **Link**.

### Q3: What is a Node?
A **Node** is any addressable device connected to a network that can transmit, receive, or forward information (e.g., computers, switches, routers, or printers).

### Q4: What is a Gateway or Router?
A node connected to two or more discrete networks is called a **Router** or **Gateway**. Its primary responsibility is to forward messages from one network to another based on routing metrics.

### Q5: What is a Point-to-Point Link?
If a physical communication link is strictly limited to connecting a single pair of nodes, it is called a **Point-to-Point link**.

### Q6: What is Multiple Access?
If a physical communication link is shared simultaneously by more than two network nodes, it is referred to as **Multiple Access**.

### Q7: What are the advantages of Distributed Processing?
* **Security & Encapsulation:** Data can be segmented and isolated across distinct nodes.
* **Distributed Databases:** Enhances data availability without relying on a single central server.
* **Faster Problem Solving:** Parallel processing speeds up computations.
* **Security through Redundancy:** Multiple copies of data prevent data loss during node failures.
* **Collaborative Processing:** Enables multi-user remote collaboration.

---

## 2. Network Performance & Reliability

### Q8: What criteria are necessary for an effective and efficient network?
* **Performance:** Evaluated via transmission time and response time.
* **Reliability:** Measured by the frequency of failure, the time taken to recover from a failure, and robust handling of catastrophes.
* **Security:** Involves protecting data from unauthorized access, modification, and malware/viruses.

### Q9: What factors affect network performance?
* Total number of concurrent users.
* Type and bandwidth capacity of the transmission medium.
* Efficiency of hardware infrastructure.
* Optimization of network software/protocols.

### Q10: What factors affect network reliability?
* Frequency of hardware/software failures.
* The recovery time of the network following a fault or link failure.

### Q11: What factors affect network security?
* Vulnerability to unauthorized access/data breaches.
* Susceptibility to malicious viruses, worms, and cyberattacks.

---

## 3. Protocols & Design Issues

### Q12: What is a Protocol?
A **Protocol** is a strict set of rules and conventions that govern all aspects of information communication between devices.

### Q13: What are the key elements of a protocol?
* **Syntax:** Refers to the structure or format of the data (i.e., the specific order in which bits/fields are presented).
* **Semantics:** Refers to the meaning or interpretation of each section of bits.
* **Timing:** Defines when data should be transmitted and how fast it can be processed or sent.

### Q14: What are the key design issues of a Computer Network?
* Achieving reliable **Connectivity**.
* Implementing **Cost-effective Resource Sharing**.
* Providing uniform **Support for Common Services**.
* Meeting target **Performance** baselines (High bandwidth, low latency).

### Q15: Define Bandwidth and Latency.
Network performance is fundamentally measured using two metrics:
* **Bandwidth (Throughput):** The total number of bits that can be transmitted over the network in a given period of time.
* **Latency (Delay):** The time taken for a message to travel completely from one end of a network to the other.

### Q16: Define Routing.
**Routing** is the systematic process of determining the optimal path to forward network messages toward their destination node based on logical addressing.

### Q17: What is a Peer-to-Peer Process?
The processes running on different machines that communicate directly at the exact same protocol layer are called **Peer-to-Peer processes**.

### Q18: When is a switch said to be congested?
A switch is **congested** when it receives incoming packets faster than its outgoing shared link can accommodate. The switch stores excess packets in its buffer memory; if this state persists for too long, the buffer space fills up completely, and incoming packets must be dropped.

### Q19: What is a Semantic Gap?
The discrepancy between what a network application expects from a communication channel and what the underlying physical network technology can actually guarantee is called the **Semantic Gap**.

### Q20: What is Round Trip Time (RTT)?
**RTT** is the total duration of time it takes for a data packet to travel from a source node to a destination node and return back to the source.

---

## 4. Data Transmission & Multiplexing

### Q21: Define Unicasting, Multicasting, and Broadcasting.
* **Unicasting:** Transmission of a message from a single source node to a single target destination node.
* **Multicasting:** Transmission of a message from a source node to a specific subset of nodes in the network.
* **Broadcasting:** Transmission of a message from a source node to all available nodes ($m$ nodes) in the network.

### Q22: What is Multiplexing?
**Multiplexing** is a set of techniques that allows the simultaneous transmission of multiple separate signals across a single shared physical data link.

### Q23: Name the main categories of Multiplexing.
1. **Frequency Division Multiplexing (FDM)**
2. **Time Division Multiplexing (TDM)**
   * *Synchronous TDM*
   * *Asynchronous (Statistical) TDM*
3. **Wave Division Multiplexing (WDM)**

### Q24: What is FDM?
**Frequency Division Multiplexing (FDM)** is an analog technique used when the total bandwidth capacity of a physical link is greater than the combined bandwidths of the individual signals to be transmitted. Each signal is modulated onto a different carrier frequency.

### Q25: What is WDM?
**Wave Division Multiplexing (WDM)** is conceptually identical to FDM, but it specifically applies to optical signals transmitted through fiber-optic channels. Multiple light signals of different wavelengths (colors) are combined onto a single fiber.

### Q26: What is TDM?
**Time Division Multiplexing (TDM)** is a digital process used when the data rate capacity of the transmission medium exceeds the data rate requirements of the sending and receiving devices. The channel link is shared sequentially by splitting it into fixed time slots.

### Q27: What is Synchronous TDM?
In **Synchronous TDM**, the multiplexer allocates a static, fixed time slot to each connected device at all times, regardless of whether that specific device has data to transmit or not.

---

## 5. The OSI Reference Model

The **Open Systems Interconnection (OSI)** model defines a 7-layer architecture for network communications:



| Layer Number | Layer Name | Category | Primary Function |
| :---: | :--- | :--- | :--- |
| **7** | Application Layer | User Support Layer | Provides user interfaces & network services (Email, FTAM, etc.) |
| **6** | Presentation Layer | User Support Layer | Handles data translation, encryption, and compression |
| **5** | Session Layer | User Support Layer | Manages network dialog control, checkpoints, and synchronization |
| **4** | Transport Layer | Connection Link | Coordinates end-to-end, process-to-process message delivery |
| **3** | Network Layer | Network Support Layer | Manages logical addressing and hop-to-hop packet routing |
| **2** | Data Link Layer | Network Support Layer | Transforms raw bits into reliable node-to-node frames |
| **1** | Physical Layer | Network Support Layer | Transmits raw bitstreams over a physical medium |

### Q28-Q31: Layer Categorization Summary
* **Network Support Layers:** Physical, Data Link, and Network Layers (Layers 1, 2, 3).
* **User Support Layers:** Session, Presentation, and Application Layers (Layers 5, 6, 7).
* **The Bridge:** The **Transport Layer (Layer 4)** sits in the middle, linking user support and network support layers to guarantee reliable source-to-destination message delivery.

---

## 6. Physical Layer & Transmission Media

### Q32: What are the concerns of the Physical Layer?
The Physical Layer coordinates functions required to transmit raw bits over physical media, emphasizing:
* Physical characteristics of interfaces and media.
* Representation of bits (encoding schemes).
* Data transmission rate.
* Synchronization of bits.
* Line configuration (point-to-point or multipoint).
* Physical topologies (mesh, star, bus, ring).
* Transmission modes (simplex, half-duplex, full-duplex).

### Q39: What are the two classes of hardware building blocks?
**Nodes** (processing endpoints/routers) and **Links** (communication channels).

### Q40: What are the different link types used to build a computer network?
* Cables (Copper)
* Leased Lines
* Last-Mile Links
* Wireless Links

### Q41: What are the categories of Transmission Media?
* **Guided Media (Wired):**
  * *Twisted-Pair Cable* (Shielded [STP] and Unshielded [UTP])
  * *Coaxial Cable*
  * *Fiber-Optic Cable*
* **Unguided Media (Wireless):**
  * *Terrestrial Microwave*
  * *Satellite Communication*

---

## 7. Error Detection & Correction

### Q42: What are the types of transmission errors?
* **Single-Bit Error:** Only one bit within a given data unit has inverted from 0 to 1, or 1 to 0.
* **Burst Error:** Two or more bits within a given data unit have changed during transmission.

### Q43 & Q44: What is Error Detection and Redundancy?
Data can be corrupted during transmission. To protect data integrity, **Redundancy** is used—which involves appending extra, non-informational bits to the data payload solely for error validation at the destination. 

Common error detection methods include:
* **VRC** (Vertical Redundancy Check / Parity)
* **LRC** (Longitudinal Redundancy Check / Block Parity)
* **CRC** (Cyclic Redundancy Check)
* **Checksum**

### Q45: What is VRC?
**Vertical Redundancy Check (VRC)** is a simple, inexpensive mechanism where a single parity bit is added to every data unit so that the total number of 1s matches the parity rule (even/odd). It easily detects single-bit errors but only catches burst errors if the total number of corrupted bits is odd.

### Q46: What is LRC?
In **Longitudinal Redundancy Check (LRC)**, a block of data is organized into a two-dimensional grid of rows and columns. A redundant row of parity bits is calculated and appended to the entire block. It is effective for burst errors, but it fails if two bits in one data unit and two bits in exactly the same column positions of another data unit are corrupted simultaneously.

### Q47: What is CRC?
**Cyclic Redundancy Check (CRC)** is a highly powerful mathematical validation technique based on binary division. The data unit is appended with a remainder generated by dividing the payload by a predetermined binary polynomial divisor.

### Q48 & Q49: What is a Checksum and its creation steps?
Checksums are error-detection structures typically used by upper-layer protocols (like TCP/IP).
1. Divide the data block into equal $n$-bit sections.
2. Add all sections together using 1's complement arithmetic.
3. Compute the complement of the final sum—this output is the **Checksum**.

### Q51: Compare Error Detection and Error Correction.
* **Error Detection:** Simply checks *if* an error occurred. The receiver only needs to know whether the data is valid or invalid.
* **Error Correction:** Requires knowing the *exact number* of corrupted bits and their *precise locations* in the stream. It is significantly more complex and resource-heavy.

### Q52: What is Forward Error Correction (FEC)?
**FEC** is a technique where the receiver uses a sufficient volume of redundant bits to automatically calculate and repair corrupted bits on the fly without asking the sender for a new copy.

### Q53: Define Retransmission.
**Retransmission** is an error correction technique where the receiver detects a data error and requests that the sender resend the message. This repeats until an error-free data unit is successfully received.

### Q54 & Q55: What are Datawords and Codewords?
* **Datawords:** The raw, unencoded message blocks of $k$ bits used in block coding.
* **Codewords:** The resulting $n$-bit blocks ($n = k + r$) after adding $r$ redundant error-check bits to the original dataword. Out of $2^n$ possible codewords, $2^n - 2^k$ are invalid.

### Q56: What is a Linear Block Code?
A linear block code is a specific type of error-control code where performing an exclusive OR (XOR / addition modulo-2) operation on any two valid codewords produces another valid codeword.

### Q57: What are Cyclic Codes?
Cyclic codes are linear block codes with an added mathematical property: if you cyclically shift (rotate) the bit pattern of any valid codeword, the resulting bit string is also a valid codeword.

### Q58 & Q59: Define Encoder and Decoder.
* **Encoder:** A hardware circuit or software module that processes data using algorithmic rules to compress, encrypt, or package raw info into an optimized, secure transmission format.
* **Decoder:** The corresponding device/program that reverses the encoding process to translate the incoming formatted stream back into its original raw state.

---

## 8. Data Link Layer & Framing

### Q33: What are the responsibilities of the Data Link Layer?
The Data Link Layer converts a raw, error-prone physical transmission facility into a reliable, node-to-node link. Its primary duties include:
* **Framing**
* **Physical Addressing** (MAC addresses)
* **Flow Control**
* **Error Control**
* **Access Control** (Managing shared links)

### Q50: How are Data Link protocols categorized?
Data Link protocols fall into two distinct structural classifications:
* **Asynchronous Protocols**
* **Synchronous Protocols**
  * *Character-Oriented / Byte-Oriented Protocols*
  * *Bit-Oriented Protocols*

### Q60: What is Framing?
**Framing** is the process of breaking a continuous bitstream into identifiable, manageable data packets called frames. It encapsulates the payload by adding header fields (like sender and receiver physical addresses) and trailer fields.

### Q61: What is Fixed-Size Framing?
In fixed-size framing, all frames are identical in size. There is no need for explicit bit patterns to mark boundaries because the system uses the predefined frame length as an automatic delimiter.

### Q62: Define Character Stuffing.
In character (or byte) stuffing, a distinct flag byte marks the beginning and end of a frame. If the actual data payload contains a byte that matches this flag pattern, an **Escape Character (ESC)** byte is stuffed directly in front of it. The receiver looks for the ESC byte, strips it away, and treats the next byte as raw data rather than a boundary delimiter.

### Q63: What is Bit Stuffing?
Mainly used in bit-oriented protocols, **Bit Stuffing** prevents data from accidentally mimicking frame boundaries. Whenever a sender encounters five consecutive `1`s in the data stream, it automatically injects a extra `0` bit. The receiver monitors the stream, and whenever it detects five consecutive `1`s followed by a `0`, it strips the `0` bit away to restore the original data.

---

## 9. Flow & Error Control (ARQ)

### Q64: What is Flow Control?
**Flow Control** refers to a set of networking procedures that limits the amount of data a sender can transmit before pausing to wait for an acknowledgment (ACK) from the receiver. This prevents a fast sender from overwhelming a slow receiver.

### Q65 & Q66: What is Error Control and Automatic Repeat Request (ARQ)?
In the Data Link Layer, error control combines error detection methods with a retransmission mechanism. When a frame is corrupted or lost, the receiver alerts the sender, which triggers a retransmission. This automated process is known as **Automatic Repeat Request (ARQ)**.

### Q67 & Q68: What is Stop-and-Wait ARQ?
* **Stop-and-Wait:** The sender transmits a single frame and stops. It cannot send any new data until it receives a confirmation acknowledgement from the receiver.
* **Stop-and-Wait ARQ:** Adds error correction by forcing the sender to keep a local copy of the sent frame and start a countdown timer. If the timer expires before an ACK arrives, the sender retransmits its saved copy.

### Q69: What is the purpose of Sequence Numbers?
To prevent ambiguity caused by delayed or duplicated frames, protocols utilize **Sequence Numbers**. A dedicated field is added to the frame header to hold this sequence number. To keep frame headers as small as possible, sequence numbers wrap around using a small range of integers.

### Q70: What is Pipelining?
**Pipelining** is an optimization technique where a sender is allowed to begin tasks (like sending subsequent data frames) before previous tasks have finished (like receiving the ACK for the first frame).

### Q71: What is a Sliding Window?
The **Sliding Window** is an abstract concept that defines the range of sequential frame numbers that the sender and receiver are currently permitted to process. It allows multiple frames to be sent concurrently without waiting for individual acknowledgments, keeping the link busy.



### Q72: What is Piggybacking?
**Piggybacking** is a technique that increases the efficiency of bidirectional protocols. Instead of sending a standalone control frame just to acknowledge a receipt, the acknowledgment info is attached ("piggybacked") directly onto an outgoing data frame traveling in that same direction.

---

## 10. Miscellaneous Networking Terms

### Q73: What are the two types of transmission technology available?
1. **Broadcast:** A single communication channel shared by all machines on the network.
2. **Point-to-Point:** Consists of many connections between individual pairs of machines.

### Q74: What is a Subnet?
A **Subnet** (subnetwork) is a distinct, logical subdivision of a larger network, typically partitioned using bridges, switches, or routers to optimize traffic management and enhance security.

### Q75: What is the difference between Communication and Transmission?
* **Transmission:** The physical movement of raw electrical, optical, or electromagnetic signals across a medium. It focuses on low-level issues like bit polarity, synchronization, and clock rates.
* **Communication:** The higher-level, meaningful exchange of information and context between two or more systems.

### Q76: What are the possible ways of data exchange?
* **Simplex:** One-way communication only (e.g., traditional television broadcasting).
* **Half-Duplex:** Two-way communication, but only one device can transmit at a time (e.g., walkie-talkies).
* **Full-Duplex:** Simultaneous, two-way communication (e.g., telephone calls).

### Q77: What is a Service Access Point (SAP)?
A **SAP** is a conceptual interface boundary point where an upper layer of the network protocol stack requests and accesses the communication services provided by the layer immediately below it.



# Practice

1. What are functions of different layers?
2. Differentiate between TCP/IP Layers and OSI Layers
3. Differentiate between TCP and UDP.
4. Differentiate between Connectionless and connection oriented connection.
5. What is meant by subnet?
6. What is meant by Gateway?
7. What is an IP address?
8. What is MAC address?
9. Define Raw Socket
10. What is a fork command?
11. Why IP address is required when we have MAC address?
12. What is meant by port?
13. What are ephemerical port number and well known port numbers?
14. What is a socket?
15. What are the parameters of socket()?
16. Describe bind(), listen(), accept(),connect(), send() and recv().
17. What are system calls? Mention few of them.
18. What is IPC? Name three techniques.
19. What type of protocol is BGP?
20. What type of protocol is OSPF?
21. Difference between ARP and RARP.
22. What is Distance Vector Routing
23. What is flooding.
24. What is three way handshake.
25. Disadvantages of Stop and wait protocol.
26. Differentiate bridges from switches.
27. What is a Router.
28. What is routing.
29. What is the role of DNS.
30. What type of transport protocol is used for DNS.

# Answers

## 1. What are functions of different layers?

The OSI model divides network communication into 7 distinct layers, each handling a specific part of the process:

*   **7. Application Layer:** Provides the interface between the user applications and the network. It handles protocols like HTTP, FTP, and SMTP.
*   **6. Presentation Layer:** Formats, encrypts, and compresses data to ensure that the receiving application can understand it.
*   **5. Session Layer:** Establishes, manages, and terminates communication sessions between applications.
*   **4. Transport Layer:** Ensures reliable host-to-host data transfer, flow control, and error correction (e.g., TCP, UDP).
*   **3. Network Layer:** Handles routing of data packets across different networks and determines the best physical path (e.g., IP).
*   **2. Data Link Layer:** Manages node-to-node data transfer on the same local network, handles physical addressing (MAC), and frames data.
*   **1. Physical Layer:** Transmits raw unstructured bit streams over a physical medium (cables, radio waves, electrical signals).

---

## 2. Differentiate between TCP/IP Layers and OSI Layers

The OSI model is a theoretical, conceptual framework with 7 layers, whereas the TCP/IP model is a practical, implementation framework with 4 layers.

| Feature | OSI Model | TCP/IP Model |
| :--- | :--- | :--- |
| **Total Layers** | 7 Layers | 4 Layers |
| **Development** | Developed by ISO as a theoretical standard. | Developed by ARPANET/DoD as a practical standard. |
| **Upper Layers** | Application, Presentation, and Session layers are separate. | Merged into a single **Application Layer**. |
| **Lower Layers** | Data Link and Physical layers are separate. | Merged into a single **Network Access / Network Interface Layer**. |
| **Usage** | Used as a reference model for education. | The actual operational standard for the Internet. |



---

## 3. Differentiate between TCP and UDP

| Feature | TCP (Transmission Control Protocol) | UDP (User Datagram Protocol) |
| :--- | :--- | :--- |
| **Connection Type** | Connection-oriented (requires setup). | Connectionless (sends without setup). |
| **Reliability** | Highly reliable; guarantees data delivery. | Unreliable; best-effort delivery, can lose packets. |
| **Speed** | Slower due to overhead, handshakes, and error checking. | Much faster with minimal overhead. |
| **Data Flow** | Byte stream; tracks packet ordering. | Datagrams; packets may arrive out of order. |
| **Common Uses** | Web browsing (HTTP), Email (SMTP), File Transfer (FTP). | Video streaming, Gaming, DNS, VoIP. |

---

## 4. Differentiate between Connectionless and Connection-Oriented Connection

*   **Connection-Oriented:** A dedicated logical connection is established between sender and receiver before any data is transferred (e.g., placing a phone call). It ensures ordered, reliable delivery with acknowledgement features. **Example:** TCP.
*   **Connectionless:** Data is divided into independent packets and sent immediately without verifying if the receiver is ready or active (e.g., sending a postal letter). Packets can take different paths and arrive out of order. **Example:** UDP.

---

## 5. What is meant by subnet?

A **subnet** (sub-network) is a logical, isolated subdivision of an IP network. Dividing a large network into smaller subnets improves performance, enhances security, and simplifies management by localizing broadcast traffic. A **subnet mask** is used to distinguish the network portion of an IP address from the host portion.

---

## 6. What is meant by Gateway?

A **gateway** is a network node that connects two networks operating on different protocols or architectures. It acts as an "entry and exit point" for a network. Whenever a device wants to communicate outside its local subnet, it forwards the packets to the default gateway (usually a router), which translates and routes the data to the destination network.

---

## 7. What is an IP address?

An **IP (Internet Protocol) Address** is a unique logical identifier assigned to every device connected to a network. It operates at the Network Layer (Layer 3) and allows devices to find and communicate with each other across different networks.
*   **IPv4:** 32-bit address represented in decimal format (e.g., `192.168.1.1`).
*   **IPv6:** 128-bit address represented in hexadecimal format (e.g., `2001:0db8:85a3:0000:0000:8a2e:0370:7334`).

---

## 8. What is MAC address?

A **MAC (Media Access Control) Address** is a unique, physical hardware address embedded into a network interface card (NIC) by the manufacturer. It operates at the Data Link Layer (Layer 2) and is 48 bits (6 bytes) long, typically written in hexadecimal format (e.g., `00:1A:2B:3C:4D:5E`). It uniquely identifies a device within a local network segment.

---

## 9. Define Raw Socket

A **Raw Socket** is a type of internet socket that allows direct access to lower-level transport and network protocols without the automatic formatting provided by standard libraries. With a raw socket, the application can bypass standard TCP/UDP processing and construct its own custom IP headers or transport payloads, which is highly useful for security testing, sniffing, or developing new protocols.

---

## 10. What is a fork command?

In operating systems (like Unix/Linux), `fork()` is a system call used by a parent process to create an exact duplicate of itself, known as the **child process**. Both processes continue execution from the instruction immediately following the `fork()` call.
*   The parent process receives the Process ID (PID) of the child as the return value.
*   The child process receives a return value of `0`.

---

## 11. Why is an IP address required when we have a MAC address?

*   **MAC addresses** are physical and flat. They don't contain structural information about where a device is located globally. Relying solely on MAC addresses would require global network switches to store billions of table entries, creating a scaling bottleneck.
*   **IP addresses** are logical and hierarchical. They are structured into network and host portions, similar to a mailing address containing a ZIP code and a house number. This allows routers to forward data packets across global networks based on broad network prefixes, without needing to know the exact physical location of the destination device until it reaches its local network.

---

## 12. What is meant by port?

A **port** is a 16-bit logical identifier used by transport layer protocols (TCP/UDP) to direct network traffic to a specific application or service on a device. While an IP address gets data to the correct computer, the port number ensures the data reaches the correct software program (e.g., web browser, mail client) running on that computer. Port numbers range from `0` to `65535`.

---

## 13. What are ephemeral port numbers and well-known port numbers?

*   **Well-Known Ports (0 – 1023):** Reserved for standard, system-level services and protocols. Examples: Port 80 (HTTP), Port 443 (HTTPS), Port 22 (SSH).
*   **Ephemeral Ports (49152 – 65535):** Dynamic, temporary ports allocated automatically by the client operating system when an application initiates a network connection. They are discarded once the connection closes. *(Note: Some OS ranges like Linux use 32768–60999, but the official IANA dynamic range starts at 49152).*

---

## 14. What is a socket?

A **socket** is an internal endpoint created by the operating system to facilitate bi-directional communication between two applications across a network. It acts as an interface between application code and the network protocol stack. A network socket is uniquely defined by a binding pair:

$$\text{Socket} = (\text{IP Address} : \text{Port Number})$$

---

## 15. What are the parameters of socket()?

The standard `socket()` system call takes three arguments:

```c
int socket(int domain, int type, int protocol);
