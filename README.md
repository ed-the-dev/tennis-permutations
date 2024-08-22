Steps:

Write a docker file and a docker compose.

Then, I can't use the compose command to mount to the container if there's no on-going process, as the container without that will finish immediately.

Build container image with `docker build -t tennis-permutations .`

the -t should give the image a name 'tennis-permutations, the . references the current working directory for the location of the Dockerfile?

So I have to write my own command (annoying) mounting the volume.

`docker images` to list images... 

Then:


`docker run -it -v $(pwd):/code tennis-permutations`

`-it` keeps the container open, I can then install anything I want into the code folder as I'm using volumes.

`-v $(pwd):/code` mounts the current directory to the code directory of the container.

`g++ -o hello_world hello_world.cpp` compiles the code to the executable called 'hello_world'

Run program with `./hello_world`

#### Setting up building and running code in VS Code environment.

The docker image comes with GCC installed, but not the compiler tools and GDB debugger.

In the C++ extension walkthrough, the customise debugging section links to this page:

https://code.visualstudio.com/docs/cpp/config-linux#_debug-helloworldcpp

Reading this I found that I needed also the compiler tools and debugger.

`apt-get install build-essential gdb`

(Maybe all of this is irrelevant if you install the compiler with the walkthrough, but not great as we want to set up a container).

I'll want to add the installation of those tools the docker image creation.

Once this is installed, you can then 'add debug configuration' through the settings cog, and all should be good!



Separately... I'm watching this C++ beginners guide. 31:56