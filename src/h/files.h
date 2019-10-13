/***************************************************************************
 * - Chronicles Copyright 2001, 2002 by Brad Ensley (Orion Elder)          *
 * - SMAUG 1.4  Copyright 1994, 1995, 1996, 1998 by Derek Snider           *
 * - Merc  2.1  Copyright 1992, 1993 by Michael Chastain, Michael Quan,    *
 *   and Mitchell Tse.                                                     *
 * - DikuMud    Copyright 1990, 1991 by Sebastian Hammer, Michael Seifert, *
 *   Hans-Henrik St�rfeldt, Tom Madsen, and Katja Nyboe.                   *
 ***************************************************************************
 * - Files header                                                          *
 ***************************************************************************/

/*
 * Data files used by the server.
 *
 * AREA_LIST contains a list of areas to boot.
 * All files are read in completely at bootup.
 * Most output files (bug, idea, typo, shutdown) are append-only.
 *
 * The NULL_FILE is held open so that we have a stream handle in reserve,
 *   so players can go ahead and telnet to all the other descriptors.
 * Then we close it whenever we need to open a file (e.g. a save file).
 */
#define PLAYER_DIR     "player/"  /* Player files */
#define STAFF_DIR      "staff/" /* Staff Info Dir */
#define BOARD_DIR      "boards/"  /* Board data dir */
#define CLAN_DIR       "clans/" /* Clan data dir */
#define STORAGE_DIR    "storage/" /* Storage dir */
#define COUNCIL_DIR    "councils/"  /* Council data dir */
#define CITY_DIR       "city/"
#define HTOWN_DIR      "htowns/"
#define BUILD_DIR      "building/"  /* Online building save dir */
#define PROG_DIR       "../mudprogs/"  /* MUDProg files */
#define SCORES_FILE	SYSTEM_DIR "scores.dat" /* File to store the scores */
#define CORPSE_DIR     "corpses/" /* Corpses */
#define BOARD_DIR       "boards/" /* Board data dir */
#define BOARD_FILE      BOARD_DIR "boards.dat"  /* For bulletin boards */
#define BANK_FILE	SYSTEM_DIR "bank.dat" /* bank account list w/ pwords */
#define LANDMARK_FILE   SYSTEM_DIR "landmark.dat" /* Landmark file */
#define VOTE_FILE       SYSTEM_DIR "vote.txt"
#define AREA_DIR       "area/"
#define AREA_LIST      AREA_DIR "area.lst"  /* List of areas */
#define DEITY_DIR	"deity/"                     /* Deity data dir */
#define DEITY_LIST	"deity.lst"                  /* List of deities */

/* All system data stuff */
#define BAN_LIST       "ban.lst"  /* List of bans */
#define RESERVED_LIST  "reserved.lst" /* List of reserved names */
#define CLAN_LIST      "clan.lst" /* List of clans */
#define ORDER_LIST     "order.lst"
#define COUNCIL_LIST   "council.lst"  /* List of councils */
#define CITY_LIST      "city.lst"
#define HTOWN_LIST     "htown.lst"
#define STAFF_LIST     "staff.lst"  /* List of staff */
#define CLASS_LIST     "class.lst"  /* List of classes */
#define RACE_LIST      "race.lst" /* List of races */
#define MORPH_FILE     "morph.dat"  /* For morph data */

#define SYSTEM_DIR     "system/"  /* Main system files */
#define SHUTDOWN_FILE  SYSTEM_DIR "shutdown.txt"  /* For 'shutdown' */
#define NAMEGEN_FILE   SYSTEM_DIR "namegen.txt" /* Used for the name generator */
#define RIPSCREEN_FILE SYSTEM_DIR "mudrip.rip"

#define RIPTITLE_FILE  SYSTEM_DIR "mudtitle.rip"
#define ANSITITLE_FILE SYSTEM_DIR "mudtitle.ans"
#define ASCTITLE_FILE  SYSTEM_DIR "mudtitle.asc"

#define HINT_FILE      SYSTEM_DIR "hints.txt" /* For Hints */
#define BOOTLOG_FILE   SYSTEM_DIR "boot.txt"  /* Boot up error file */
#define PBUG_FILE	"pbugs.dat" // For 'bug' data
#define IDEA_FILE	"ideas.dat" // For 'idea' data
#define TYPO_FILE	"typos.dat" // For 'typo' data
#define LOG_FILE       SYSTEM_DIR "log.txt" /* For talking in logged rooms */
#define MOBLOG_FILE    SYSTEM_DIR "moblog.txt"  /* For mplog messages */
#define PLEVEL_FILE    SYSTEM_DIR "plevel.txt"  /* Char level info */
#define WIZLIST_FILE   SYSTEM_DIR "WIZLIST" /* Wizlist */
#define STAFFLIST_FILE SYSTEM_DIR "STAFFLIST" /* CTA Stafflist */
#define SKILL_FILE     SYSTEM_DIR "skills.dat"  /* Skill table */
#define HERB_FILE      SYSTEM_DIR "herbs.dat" /* Herb table */
#define TONGUE_FILE    SYSTEM_DIR "tongues.dat" /* Tongue tables */
#define SOCIAL_FILE    SYSTEM_DIR "socials.dat" /* Socials */
#define COMMAND_FILE   SYSTEM_DIR "commands.dat"  /* Commands */
#define BUG_FILE       SYSTEM_DIR "bugs.dat"  /* I like a place to see all the bugs at
                                               * once */
#define PROJECTS_FILE  SYSTEM_DIR "projects.txt"  /* For projects */
#define TEMP_FILE      SYSTEM_DIR "charsave.tmp"  /* More char save protect */
#define AUTH_FILE      SYSTEM_DIR "auth.dat"
#define LAST_FILE      SYSTEM_DIR "last.lst"  /* last list */
#define VLOG_FILE      SYSTEM_DIR "log.dat"
#define CSAVE_FILE     SYSTEM_DIR "csave.dat"
#define CLASSDIR   "classes/"
#define RACEDIR    "races/"
#define QUESTS_FILE SYSTEM_DIR "quests.dat"
