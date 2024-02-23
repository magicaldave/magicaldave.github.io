<!-- Embedded CSS -->
<style>
  .resume-header {
    display: flex;
    justify-content: center; /* Center content horizontally */
    width: 100vw; /* Set width to 100% of the viewport height */
  }

  .resume-container {
    display: flex;
    align-items: center; /* Align items vertically */
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
    <img src="/home/sk3shun-8/Pictures/QR Site Links/armorqr.png" class="resume-image">

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
    <li>Comfortable in C++, Python, and JavaScript</li>
    <li>Writing scripts in bash, zsh, Python, and Lua</li>
    <li>Experience building networks based on multiple platforms including Tomato and Cisco iOS</li>
    <li>Nearly a decade of experience in hardware, primarily focused on building desktops and board-level repairs</li>
    <li>Comfortable working with a global team, including remote work and coordinating with team members across continents</li>
    <li>My goal as a technologist is to push the limits of what is possible! I thrive on delivering wow moments to customers and peers</li>
  </ul>
  <h3>Projects</h3>
  <ul>
    <li>I contribute to <a href="https://gitlab.com/OpenMW/openmw">OpenMW</a>, which is a GPL-licensed 3D game engine designed be compatible with The Elder Scrolls 3: Morrowind out of the box. My contributions are mostly focused on developing the engine's development kit, OpenMW-CS.</li>
    <li><a href="https://github.com/magicaldave/Morrobroom">MorroBroom</a> -- An OpenMW-compatible compiler built in Rust, designed to be used with the Quake Editor Trenchbroom. In effect, Morrobroom is a tool to port Quake mods to OpenMW. It does so by generating 3D assets nearly from scratch using nothing but the text files produced by Trenchbroom.</li>
    <li><a href="https://github.com/magicaldave/Openmw-Bumpmap-Translator">OpenMW Bumpmap Translator</a> (OBMT) -- An asset patcher designed to convert select 3D assets from older Morrowind standards to newer OpenMW ones.</li>
    <li><a href="https://morrowind-modding.github.io/">Morrowind Modding Wiki</a> -- I'm one of three owners of the newly established Morrowind Modding Wiki, which we hope to eventually serve as a community hub for all Morrowind modmaking knowledge. MMW is built using Obsidian for contributors, and deployed through <a href="https://github.com/jackyzha0/quartz">Quartz</a>.</li>
    <li><a href="https://github.com/DreamWeave-MP/Dreamweave">Dreamweave</a> -- This is a fork of OpenMW, or rather, TES3MP, the multiplayer spinoff of OpenMW. Some friends and I spun this up last year and are slowly developing it into a newer, leaner, and meaner multiplayer engine than before with a greater focus on large-scale servers. My main contribution was organizing and coordinating the team throughout the course of the project, and developing build and delivery scripts for all platforms across the half-dozen repositories comprising the main body of the project.</li>
    <li><a href="https://github.com/magicaldave/Fuzzy-Ai/tree/main">Fuzzy-AI</a> -- A multi-language tool designed as an experiment to use AI to simply try to make people happy. Available in python as a local script, or javascript (Node) for web admins, Fuzzy will get random text prompts from ChatGPT, send those text prompts to an image and voice generator, and display all three to the user simultaenously.</li>
    <li><a href="https://github.com/magicaldave/hBnB_Init">hbnb_init</a> -- Deployment script for a later project during my time at holberton. HBNB_init is a pair of bash scripts intended to be used on Ubuntu 16.04 machines to install all required packages, configure, and deploy a live web application with a single command from the user.</li>
    <li>I've also made minor contributions to other game or Morrowind-adjacent projects such as <a href="https://gitlab.com/bmwinger/delta-plugin">DeltaPlugin</a>, <a href="https://github.com/mdqinc/SDL_GameControllerDB/commits/master/?author=magicaldave">SDL_GameControllerDB</a>, and <a href="https://github.com/FIX94/Nintendont/commits/master/?author=magicaldave">Nintendont</a></li>
  </ul>
</div>
