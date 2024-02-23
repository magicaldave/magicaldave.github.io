<!-- Embedded CSS -->
<style>
  .resume-header {
    display: flex;
    justify-content: center; /* Center content horizontally */
    /* width: 100vw; /\* Set width to 100% of the viewport height *\/ */
  }

  .resume-container {
    display: flex;
    align-items: center; /* Align items vertically */
    max-height: 256px;
    max-width: 400px;
  }

  .resume-image {
    max-width: 66%;
    max-height: 66%;
    margin-right: 20px; /* Add some space between the image and text */
  }

  .resume-content {
    text-align: center; /* Align text in the center */
    margin-left: 20px; /* Add some space between the image and text */
    width: 50%;
  }

  .resume-links {
    text-align: right; /* Align links to the right */
  }

  /* Additional styling for the list items */
  .resume-list {
      justify-content: center; /* Center content horizontally */  
    text-align: center; /* Align list items to the left */
    margin-left: 30%; /* Adjust margin for better positioning */
    margin-right: 25%; /* Adjust margin for better positioning */
    max-width: 50%;
  }

  .resume-list li {
      margin: 5px 0; /* Add some space between the list items */
  }

  /* html { */
  /*     --s: 50px; */
  /*     --c: #191b22; */
  /*     --_s: calc(2*var(--s)) calc(2*var(--s)); */
  /*     --_g: 35.36% 35.36% at; */
  /*     --_c: #0000 66%,#20222a 68% 70%,#0000 72%; */
  /*     background: */
  /*         radial-gradient(var(--_g) 100% 25%,var(--_c)) var(--s) var(--s)/var(--_s), */
  /*         radial-gradient(var(--_g) 0 75%,var(--_c)) var(--s) var(--s)/var(--_s), */
  /*         radial-gradient(var(--_g) 100% 25%,var(--_c)) 0 0/var(--_s), */
  /*         radial-gradient(var(--_g) 0 75%,var(--_c)) 0 0/var(--_s), */
  /*         repeating-conic-gradient(var(--c) 0 25%,#0000 0 50%) 0 0/var(--_s), */
  /*         radial-gradient(var(--_c)) 0 calc(var(--s)/2)/var(--s) var(--s) var(--c); */
  /*     background-attachment: fixed; */
  /* } */
  
</style>

<h1 style="text-align: center;">Dakota (Dave) Corley</h1>

<!-- Main container to center all elements -->
<div class="resume-header">
  <!-- Resume content -->
  <div class="resume-container">
    <img src="https://raw.githubusercontent.com/magicaldave/magicaldave.github.io/main/images/9af62d6f8d5ed28a9af9140cdc7821b8.jpg?token=GHSAT0AAAAAACOHX3JH6HRS4I4EPFFM7PJSZOYZ7RA" class="resume-image">

    <div class="resume-content">

      <div class="resume-links">
        <h2><a href="https://gitlab.com/magicaldave1">GitLab</a></h2>
        <h2><a href="https://github.com/magicaldave">GitHub</a></h2>
        <h2><a href="https://magicaldave.github.io/">Blog</a></h2>
        <h2><a href="https://www.linkedin.com/in/magicaldave/">LinkedIn</a></h2>
      </div>
    </div>
  </div>
</div>

  <!-- List items -->
<div class="resume-list">

  <h3>Skills</h3>
  <ul>
    <li>*Nix system administration - extensive experience building and maintaining live services on Ubuntu, Arch, and Slackware (unRAID) distributions</li>
    <li>Building Continuous Integration and Delivery systems for cross-platform applications, including containerization primarily through Docker</li>
    <li>Advanced git usage</li>
    <li>Building tools and applications to meet specific consumer needs, specializing in Rust</li>
    <li>Best in C++ and Rust</li>
    <li>Writing scripts in bash, zsh, Python, and Lua</li>
    <li>Experience building networks based on multiple platforms including Tomato and Cisco iOS</li>
    <li>Nearly a decade of experience in hardware, primarily focused on building desktops and board-level repairs</li>
    <li>Experience with cloud services including DigitalOcean and Google Cloud</li>
    <li>Top 5% in LinkedIn Linux skills assessment</li>
    <li>Comfortable working with a global team, including remote work and coordinating with team members across continents</li>
    <li>My goal as a technologist is to push the limits of what is possible! I thrive on delivering wow moments to customers and peers</li>
  </ul>
<br><br>
  <h3>Projects</h3>
  <ul>
    <li>I contribute to <a href="https://gitlab.com/OpenMW/openmw">OpenMW</a>, which is a GPL-licensed 3D game engine designed be compatible with The Elder Scrolls 3: Morrowind out of the box. My contributions are mostly focused on developing the engine's development kit, OpenMW-CS.</li>
    <li><a href="https://github.com/magicaldave/Morrobroom">MorroBroom</a> -- An OpenMW-compatible compiler built in Rust, designed to be used with the Quake Editor Trenchbroom. In effect, Morrobroom is a tool to port Quake mods to OpenMW. It does so by generating 3D assets nearly from scratch using nothing but the text files produced by Trenchbroom.</li>
    <li><a href="https://morrowind-modding.github.io/">Morrowind Modding Wiki</a> -- I'm one of three owners of the newly established Morrowind Modding Wiki, which we hope to eventually serve as a community hub for all Morrowind modmaking knowledge. MMW is built using Obsidian for contributors, and deployed through <a href="https://github.com/jackyzha0/quartz">Quartz</a>.</li>
    <li><a href="https://github.com/DreamWeave-MP/Dreamweave">Dreamweave</a> -- This is a fork of OpenMW, or rather, TES3MP, the multiplayer spinoff of OpenMW. Some friends and I spun this up last year and are slowly developing it into a newer, leaner, and meaner multiplayer engine than before with a greater focus on large-scale servers. My main contribution was organizing and coordinating the team throughout the course of the project, and developing build and delivery scripts for all platforms across the half-dozen repositories comprising the main body of the project.</li>
    <li><a href="https://github.com/magicaldave/Fuzzy-Ai/tree/main">Fuzzy-AI</a> -- A multi-language tool designed as an experiment to use AI to simply try to make people happy. Available in python as a local script, or javascript (Node) for web admins, Fuzzy will get random text prompts from ChatGPT, send those text prompts to an image and voice generator, and display all three to the user simultaenously.</li>
    <li><a href="https://github.com/magicaldave/hBnB_Init">hbnb_init</a> -- Deployment script for a later project during my time at holberton. HBNB_init is a pair of bash scripts intended to be used on Ubuntu 16.04 machines to install all required packages, configure, and deploy a live web application with a single command from the user.</li>
    <li>I've also made minor contributions to other gaming or Morrowind-adjacent projects such as <a href="https://gitlab.com/bmwinger/delta-plugin">DeltaPlugin</a>, <a href="https://github.com/mdqinc/SDL_GameControllerDB/commits/master/?author=magicaldave">SDL_GameControllerDB</a>, and <a href="https://github.com/FIX94/Nintendont/commits/master/?author=magicaldave">Nintendont</a></li>
  </ul>
<br><br>
  <h3>Work Experience</h3>
  <ul>
    <li><h4>Dollar General: September 2021 - February 2022</h4></li>
    <ul>
      <li>Closing Shift Keyholder</li>
      <li>Facilitated nightly closing duties such as handling bank deposits and counting daily cash</li>
      <li>Helped train new employees</li>
      <li>Stocking and customer service</li>
      <li>Left to attend Holberton</li>
    </ul>
    <br>
    <li><h4>United States Cellular Coporation: July 2020 - November 2020</h4></li>
    <ul>
      <li>Retail Wireless Consultant</li>
      <li>Assisted customers with technical and billing related issues on their accounts</li>
      <li>Provided appeasements when appropriate such as bill credits or discounted accessories</li>
      <li>Worked to deliver solutions to all types of customers based on their own needs and interests</li>
      <li>Left to focus on being a stay at home dad</li>
    </ul>
    <br>
    <li><h4>Conduent: March 2017 - January 2019</h4></li>
    <ul>
      <li>Technical Support Advisor II</li>
      <li>Facilitated warranty repairs through various channels for a range of devices</li>
      <li>Troubleshoot hardware, software, service, and billing issues on mobile and desktop</li>
      <li>Served as go-between for customers and engineers when investigating bug reports</li>
      <li>Trained new employees and supervised live calls during their "nesting" phase</li>
      <li>Served as permanent point of contact for customers on specific issues, sometimes working on cases for months at a time</li>
      <li>Left to find an in-office role</li>
    </ul>
  </ul>
<br><br>
  <h3>Education</h3>
  <ul>
    <li><h4>AR/VR Engineering @ Holberton Tulsa: April 2022 - October 2023</h4></li>
      <ul>
        <li>20-Month Software Engineering Program</li>
        <li>One trimester of C, from basics all the way up to writing a terminal from scratch</li>
        <li>One trimester of Python, from basics all the way up to writing a web server using Flask and MySQL databases to make an AirBnB clone (HBNB)</li>
        <li>One trimester in Unity developing simple games and learning about core technologies</li>
        <li>Specializing in C# and 3D worldspace simulations</li>
        <li>Despite having a great experience with Holberton's program, I ultimately left because my earlier time at the school ignited a passion in me for Open Source and I found my developmental interests took me far away from building simulations in Unity and struck out on my own</li>
        <li>Departed 2023</li>
      </ul>
      <br>
    <li><h4>Computer Repair & Network Administration @ Tulsa Technology Center - Riverside Campus: 2015 - 2016</h4></li>
      <ul>
        <li>Windows Server and desktop operating systems</li>
        <li>Fundamentals of computer hardware including typical desktop components and cabling</li>
        <li>Networking concepts such as subnetting and network topologies & security</li>
        <li>Built multiple machines for other students in the class throughout the year</li>
        <li>Graduated 2016 with Director's Honor Roll</li>
      </ul>
    <br>
    <li><h4>GED in 2015</h4></li>
    <li><h4>Nathan Hale High School</h4></li>
      <ul>
        <li>Quiz Bowl Team - District 1st Place 2014</li>
        <li>First Sergeant in JROTC program</li>
      </ul>
  </ul>
  <br><br>Professional and personal references available upon request.
</div>
