## Harvest notes

1. Background: these initial scripts are probably all we (at CMS Norman) will ever need).  Based on our short experience with this backup approach, here are some ideas for expanding into to accommodate other schools and provide more flexible configurations.

1. The `harvest-1.sh` is intended to be the simplest runnable version possible.  Subsequent scripts (*e.g.*, `harvest-2.sh`) should be more efficient and have better error messages, but be more difficult for novice bash scripters to follow or adapt to their own scripts.

1. `scp` is used because `rsync` is not installed on the Wallaby V23.  However, the text files transfer so quickly (<10 sec), any performance benefit of rsync is probably minimal.

1. If you run it on a cronjob, do not plan to do anything else with your laptop on the internet.  Unless the machine has two network connections, and you can keep them separate

## Short-term TODOs:

1. Refactor the configuration options out of the scripts.  Put them in something like a [yaml](http://www.yaml.org/start.html) or [json](http://www.json.org/) file.
1. Each configuration file should include:
    1. Boolean value for if copied files should bt added & committed to the git repository.
    1. An entry for each Wallaby.
1. Each Wallaby in the configuration file should include:
    1. SSID.
    1. Team/group name.  This label is recorded for the humans to keep track of things better.  No current plans for using it in things like file names.
    1. source location of user files.  If blank, default to `~/Documents/KISS/Default User/`.  If one Wallaby has *k* users, the configuration file should have *k* different entries.
    1. destination location of user files.  This field is required.
    1. IP address.  If blank, default to `192.168.125.1`.
    1. Boolean value indicating if the Wallaby shold be backed up.  The toggle makes it easy to exclude a machine (*e.g.*, for being temporarily out of service) so time is not wasted trying to connect to it.    
    1. Controller version (*e.g.*, 'Wallaby v23') so theoretically it could accommodate institutions that have a heterogenous fleet (even beyond Wallabies in the future).
    1. File transfer protocol.  If blank, default to 'scp'; possibly support rsync in the future.
1. If one SSID/Link has multiple users, nest them all in a single `nmcli` call, to be more efficient.  Let the program figure out how to bunch the users within one nmcli call.  Keep the configuration file normalized (in the database sense of 'normalized').
1. Separate the script that runs the backups, from the backups.  Right now, everything is bundled in this [same repo](https://github.com/wibeasley/cms-norman-jbc-2016).
1. Examples of more advanced WiFi programming w/ Bash:
    1. http://askubuntu.com/a/602364/153921

## Long-term TODOs and possibilities:

1. Most of the follow probably outgrows what Bash can do easily.  It probably should be written in Python, and a distributed a module.  That way, you can push updates to users with [pip](https://pypi.python.org/pypi/pip).  It might make it easier for schools with only Windows machines, and cannot run a Linux machine for their backup server.

1. Produce a report to help determine
    1. When a Wallaby was last backed up.
    1. Battery life of each Wallaby at the last backup.
    1. Wi-Fi strength/health of each Wallaby.
    1. Number of users (and their number of programs) for each Wallaby.
    1. Code health or code complexity (*e.g.*, [lizard](https://github.com/terryyin/lizard)) of each program.
1. Destination of backups, such as AWS S3.  Like Git/GitHub, you can easily [cached your credentials](http://docs.aws.amazon.com/cli/latest/userguide/cli-chap-getting-started.html) so nothing is stored in the configuration file.  Ideally this location is in the cloud, so the backup utility runs just as easily at competitions as at the home institutions during class.  
    
1. However, I would still advocate GitHub. 
    1. It is easy to turn back the clock to any commit, even if it was months ago.  Especially with [SourceTree](https://www.sourcetreeapp.com/).
    1. The previous code versions can be accessed through the browser (on GitHub.com), or form the backup machine.
    1. It is probably easier to manage the connections.  You can run commits every ~10 minutes (when you're connecting only to the Wallabies, and you're not on the internet).  Every ~1 hour, connect to the internet, and push the 6 commits to the central GitHub server. 
    1. Private repositories are [free for schools](https://education.github.com/), for those institutions who care about being scooped.  
1. In addition to writing to the `.logs/` directory, write to a SQLite database.  That would make the real-time report much easier to generate.

## Current Limitations
(CMS Norman can easily live with these.  Just brainstorming for bigger/older schools with more at stake.)

1. This only backs up code.  It lacks an automated way to recover code.  If disaster strikes, it is probably easiest to let the student browse the code on GitHub.com.
1. Even w/ a private repository, everyone at a school can see the code for everyone else.  But if this is a probablem, do not give any student access to the repository.  You would have to be by them when the look through and download old versions.
