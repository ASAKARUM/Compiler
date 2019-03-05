#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 85 of your 30 day trial period.
# 
# This file was produced by an UNREGISTERED COPY of Parser Generator. It is
# for evaluation purposes only. If you continue to use Parser Generator 30
# days after installation then you are required to purchase a license. For
# more information see the online help or go to the Bumble-Bee Software
# homepage at:
# 
# http://www.bumblebeesoftware.com
# 
# This notice must remain present in the file. It cannot be removed.
#############################################################################

#############################################################################
# mylexer.v
# Lex verbose file generated from mylexer.l.
# 
# Date: 01/02/19
# Time: 17:24:14
# 
# ALex Version: 2.07
#############################################################################


#############################################################################
# Expressions
#############################################################################

    1  \/\*[^*]*[*]+([^*/][^*]*[*]+)*[*]*\/

    2  \/\/(.*)?

    3  "int"

    4  "float"

    5  "char"

    6  "double"

    7  "bool"

    8  "break"

    9  "case"

   10  "continue"

   11  "do"

   12  "else"

   13  "for"

   14  "goto"

   15  "if"

   16  "return"

   17  "switch"

   18  "void"

   19  "while"

   20  "true"

   21  "false"

   22  "main"

   23  "->"

   24  "scanf"

   25  "print"|"printf"

   26  "struct"

   27  #include\<([a-zA-Z])+(.h)?\>

   28  ([0-9]+)+([a-zA-Z]|_)+

   29  ([a-zA-Z]|[_])([a-zA-Z]|[0-9]|[_])*

   30  ([0-9]+)(\.[0-9]+)?([Ee][+-]?digits)?

   31  \%(([0-9]+)(\.[0-9]+)?([Ee][+-]?digits)?)?([a-zA-Z])

   32  \+\=

   33  \-\=

   34  \*\=

   35  \/\=

   36  \%\=

   37  \>\>

   38  \<\<

   39  \+\+

   40  \-\-

   41  "&&"

   42  "||"

   43  \<\=

   44  \>\=

   45  \=\=

   46  \!\=

   47  \;

   48  \,

   49  \:

   50  \=

   51  \[

   52  \]

   53  \.

   54  \&

   55  \!

   56  \~

   57  \-

   58  \+

   59  \*

   60  \/

   61  \%

   62  \<

   63  \>

   64  \^

   65  \|

   66  \?

   67  \{

   68  \}

   69  \(

   70  \)

   71  \'

   72  \"

   73  [ \t]+

   74  [\n]+

   75  .


#############################################################################
# States
#############################################################################

state 1
	INITIAL

	0x00 - 0x08 (9)    goto 3
	0x09               goto 4
	0x0a               goto 5
	0x0b - 0x1f (21)   goto 3
	0x20               goto 4
	0x21               goto 6
	0x22               goto 7
	0x23               goto 8
	0x24               goto 3
	0x25               goto 9
	0x26               goto 10
	0x27               goto 11
	0x28               goto 12
	0x29               goto 13
	0x2a               goto 14
	0x2b               goto 15
	0x2c               goto 16
	0x2d               goto 17
	0x2e               goto 18
	0x2f               goto 19
	0x30 - 0x39 (10)   goto 20
	0x3a               goto 21
	0x3b               goto 22
	0x3c               goto 23
	0x3d               goto 24
	0x3e               goto 25
	0x3f               goto 26
	0x40               goto 3
	0x41 - 0x5a (26)   goto 27
	0x5b               goto 28
	0x5c               goto 3
	0x5d               goto 29
	0x5e               goto 30
	0x5f               goto 27
	0x60               goto 3
	0x61               goto 27
	0x62               goto 31
	0x63               goto 32
	0x64               goto 33
	0x65               goto 34
	0x66               goto 35
	0x67               goto 36
	0x68               goto 27
	0x69               goto 37
	0x6a - 0x6c (3)    goto 27
	0x6d               goto 38
	0x6e - 0x6f (2)    goto 27
	0x70               goto 39
	0x71               goto 27
	0x72               goto 40
	0x73               goto 41
	0x74               goto 42
	0x75               goto 27
	0x76               goto 43
	0x77               goto 44
	0x78 - 0x7a (3)    goto 27
	0x7b               goto 45
	0x7c               goto 46
	0x7d               goto 47
	0x7e               goto 48
	0x7f - 0xff (129)  goto 3


state 2
	^INITIAL

	0x00 - 0x08 (9)    goto 3
	0x09               goto 4
	0x0a               goto 5
	0x0b - 0x1f (21)   goto 3
	0x20               goto 4
	0x21               goto 6
	0x22               goto 7
	0x23               goto 8
	0x24               goto 3
	0x25               goto 9
	0x26               goto 10
	0x27               goto 11
	0x28               goto 12
	0x29               goto 13
	0x2a               goto 14
	0x2b               goto 15
	0x2c               goto 16
	0x2d               goto 17
	0x2e               goto 18
	0x2f               goto 19
	0x30 - 0x39 (10)   goto 20
	0x3a               goto 21
	0x3b               goto 22
	0x3c               goto 23
	0x3d               goto 24
	0x3e               goto 25
	0x3f               goto 26
	0x40               goto 3
	0x41 - 0x5a (26)   goto 27
	0x5b               goto 28
	0x5c               goto 3
	0x5d               goto 29
	0x5e               goto 30
	0x5f               goto 27
	0x60               goto 3
	0x61               goto 27
	0x62               goto 31
	0x63               goto 32
	0x64               goto 33
	0x65               goto 34
	0x66               goto 35
	0x67               goto 36
	0x68               goto 27
	0x69               goto 37
	0x6a - 0x6c (3)    goto 27
	0x6d               goto 38
	0x6e - 0x6f (2)    goto 27
	0x70               goto 39
	0x71               goto 27
	0x72               goto 40
	0x73               goto 41
	0x74               goto 42
	0x75               goto 27
	0x76               goto 43
	0x77               goto 44
	0x78 - 0x7a (3)    goto 27
	0x7b               goto 45
	0x7c               goto 46
	0x7d               goto 47
	0x7e               goto 48
	0x7f - 0xff (129)  goto 3


state 3
	match 75


state 4
	0x09               goto 4
	0x20               goto 4

	match 73


state 5
	0x0a               goto 5

	match 74


state 6
	0x3d               goto 49

	match 55


state 7
	match 72


state 8
	0x69               goto 50

	match 75


state 9
	0x30 - 0x39 (10)   goto 51
	0x3d               goto 52
	0x41 - 0x5a (26)   goto 53
	0x61 - 0x7a (26)   goto 53

	match 61


state 10
	0x26               goto 54

	match 54


state 11
	match 71


state 12
	match 69


state 13
	match 70


state 14
	0x3d               goto 55

	match 59


state 15
	0x2b               goto 56
	0x3d               goto 57

	match 58


state 16
	match 48


state 17
	0x2d               goto 58
	0x3d               goto 59
	0x3e               goto 60

	match 57


state 18
	match 53


state 19
	0x2a               goto 61
	0x2f               goto 62
	0x3d               goto 63

	match 60


state 20
	0x2e               goto 64
	0x30 - 0x39 (10)   goto 20
	0x41 - 0x44 (4)    goto 65
	0x45               goto 66
	0x46 - 0x5a (21)   goto 65
	0x5f               goto 65
	0x61 - 0x64 (4)    goto 65
	0x65               goto 66
	0x66 - 0x7a (21)   goto 65

	match 30


state 21
	match 49


state 22
	match 47


state 23
	0x3c               goto 67
	0x3d               goto 68

	match 62


state 24
	0x3d               goto 69

	match 50


state 25
	0x3d               goto 70
	0x3e               goto 71

	match 63


state 26
	match 66


state 27
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x7a (26)   goto 27

	match 29


state 28
	match 51


state 29
	match 52


state 30
	match 64


state 31
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x6e (14)   goto 27
	0x6f               goto 72
	0x70 - 0x71 (2)    goto 27
	0x72               goto 73
	0x73 - 0x7a (8)    goto 27

	match 29


state 32
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61               goto 74
	0x62 - 0x67 (6)    goto 27
	0x68               goto 75
	0x69 - 0x6e (6)    goto 27
	0x6f               goto 76
	0x70 - 0x7a (11)   goto 27

	match 29


state 33
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x6e (14)   goto 27
	0x6f               goto 77
	0x70 - 0x7a (11)   goto 27

	match 29


state 34
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x6b (11)   goto 27
	0x6c               goto 78
	0x6d - 0x7a (14)   goto 27

	match 29


state 35
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61               goto 79
	0x62 - 0x6b (10)   goto 27
	0x6c               goto 80
	0x6d - 0x6e (2)    goto 27
	0x6f               goto 81
	0x70 - 0x7a (11)   goto 27

	match 29


state 36
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x6e (14)   goto 27
	0x6f               goto 82
	0x70 - 0x7a (11)   goto 27

	match 29


state 37
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x65 (5)    goto 27
	0x66               goto 83
	0x67 - 0x6d (7)    goto 27
	0x6e               goto 84
	0x6f - 0x7a (12)   goto 27

	match 29


state 38
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61               goto 85
	0x62 - 0x7a (25)   goto 27

	match 29


state 39
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x71 (17)   goto 27
	0x72               goto 86
	0x73 - 0x7a (8)    goto 27

	match 29


state 40
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x64 (4)    goto 27
	0x65               goto 87
	0x66 - 0x7a (21)   goto 27

	match 29


state 41
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x62 (2)    goto 27
	0x63               goto 88
	0x64 - 0x73 (16)   goto 27
	0x74               goto 89
	0x75 - 0x76 (2)    goto 27
	0x77               goto 90
	0x78 - 0x7a (3)    goto 27

	match 29


state 42
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x71 (17)   goto 27
	0x72               goto 91
	0x73 - 0x7a (8)    goto 27

	match 29


state 43
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x6e (14)   goto 27
	0x6f               goto 92
	0x70 - 0x7a (11)   goto 27

	match 29


state 44
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x67 (7)    goto 27
	0x68               goto 93
	0x69 - 0x7a (18)   goto 27

	match 29


state 45
	match 67


state 46
	0x7c               goto 94

	match 65


state 47
	match 68


state 48
	match 56


state 49
	match 46


state 50
	0x6e               goto 95


state 51
	0x2e               goto 96
	0x30 - 0x39 (10)   goto 51
	0x41 - 0x44 (4)    goto 53
	0x45               goto 97
	0x46 - 0x5a (21)   goto 53
	0x61 - 0x64 (4)    goto 53
	0x65               goto 97
	0x66 - 0x7a (21)   goto 53


state 52
	match 36


state 53
	match 31


state 54
	match 41


state 55
	match 34


state 56
	match 39


state 57
	match 32


state 58
	match 40


state 59
	match 33


state 60
	match 23


state 61
	0x00 - 0x29 (42)   goto 61
	0x2a               goto 98
	0x2b - 0xff (213)  goto 61


state 62
	0x00 - 0x09 (10)   goto 62
	0x0b - 0xff (245)  goto 62

	match 2


state 63
	match 35


state 64
	0x30 - 0x39 (10)   goto 99


state 65
	0x41 - 0x5a (26)   goto 65
	0x5f               goto 65
	0x61 - 0x7a (26)   goto 65

	match 28


state 66
	0x2b               goto 100
	0x2d               goto 100
	0x41 - 0x5a (26)   goto 65
	0x5f               goto 65
	0x61 - 0x63 (3)    goto 65
	0x64               goto 101
	0x65 - 0x7a (22)   goto 65

	match 28


state 67
	match 38


state 68
	match 43


state 69
	match 45


state 70
	match 44


state 71
	match 37


state 72
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x6e (14)   goto 27
	0x6f               goto 102
	0x70 - 0x7a (11)   goto 27

	match 29


state 73
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x64 (4)    goto 27
	0x65               goto 103
	0x66 - 0x7a (21)   goto 27

	match 29


state 74
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x72 (18)   goto 27
	0x73               goto 104
	0x74 - 0x7a (7)    goto 27

	match 29


state 75
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61               goto 105
	0x62 - 0x7a (25)   goto 27

	match 29


state 76
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x6d (13)   goto 27
	0x6e               goto 106
	0x6f - 0x7a (12)   goto 27

	match 29


state 77
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x74 (20)   goto 27
	0x75               goto 107
	0x76 - 0x7a (5)    goto 27

	match 11


state 78
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x72 (18)   goto 27
	0x73               goto 108
	0x74 - 0x7a (7)    goto 27

	match 29


state 79
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x6b (11)   goto 27
	0x6c               goto 109
	0x6d - 0x7a (14)   goto 27

	match 29


state 80
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x6e (14)   goto 27
	0x6f               goto 110
	0x70 - 0x7a (11)   goto 27

	match 29


state 81
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x71 (17)   goto 27
	0x72               goto 111
	0x73 - 0x7a (8)    goto 27

	match 29


state 82
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x73 (19)   goto 27
	0x74               goto 112
	0x75 - 0x7a (6)    goto 27

	match 29


state 83
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x7a (26)   goto 27

	match 15


state 84
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x73 (19)   goto 27
	0x74               goto 113
	0x75 - 0x7a (6)    goto 27

	match 29


state 85
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x68 (8)    goto 27
	0x69               goto 114
	0x6a - 0x7a (17)   goto 27

	match 29


state 86
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x68 (8)    goto 27
	0x69               goto 115
	0x6a - 0x7a (17)   goto 27

	match 29


state 87
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x73 (19)   goto 27
	0x74               goto 116
	0x75 - 0x7a (6)    goto 27

	match 29


state 88
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61               goto 117
	0x62 - 0x7a (25)   goto 27

	match 29


state 89
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x71 (17)   goto 27
	0x72               goto 118
	0x73 - 0x7a (8)    goto 27

	match 29


state 90
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x68 (8)    goto 27
	0x69               goto 119
	0x6a - 0x7a (17)   goto 27

	match 29


state 91
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x74 (20)   goto 27
	0x75               goto 120
	0x76 - 0x7a (5)    goto 27

	match 29


state 92
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x68 (8)    goto 27
	0x69               goto 121
	0x6a - 0x7a (17)   goto 27

	match 29


state 93
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x68 (8)    goto 27
	0x69               goto 122
	0x6a - 0x7a (17)   goto 27

	match 29


state 94
	match 42


state 95
	0x63               goto 123


state 96
	0x30 - 0x39 (10)   goto 124


state 97
	0x2b               goto 125
	0x2d               goto 125
	0x64               goto 126

	match 31


state 98
	0x00 - 0x29 (42)   goto 61
	0x2a               goto 98
	0x2b - 0x2e (4)    goto 61
	0x2f               goto 127
	0x30 - 0xff (208)  goto 61


state 99
	0x30 - 0x39 (10)   goto 99
	0x45               goto 128
	0x65               goto 128

	match 30


state 100
	0x64               goto 129


state 101
	0x41 - 0x5a (26)   goto 65
	0x5f               goto 65
	0x61 - 0x68 (8)    goto 65
	0x69               goto 130
	0x6a - 0x7a (17)   goto 65

	match 28


state 102
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x6b (11)   goto 27
	0x6c               goto 131
	0x6d - 0x7a (14)   goto 27

	match 29


state 103
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61               goto 132
	0x62 - 0x7a (25)   goto 27

	match 29


state 104
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x64 (4)    goto 27
	0x65               goto 133
	0x66 - 0x7a (21)   goto 27

	match 29


state 105
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x71 (17)   goto 27
	0x72               goto 134
	0x73 - 0x7a (8)    goto 27

	match 29


state 106
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x73 (19)   goto 27
	0x74               goto 135
	0x75 - 0x7a (6)    goto 27

	match 29


state 107
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61               goto 27
	0x62               goto 136
	0x63 - 0x7a (24)   goto 27

	match 29


state 108
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x64 (4)    goto 27
	0x65               goto 137
	0x66 - 0x7a (21)   goto 27

	match 29


state 109
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x72 (18)   goto 27
	0x73               goto 138
	0x74 - 0x7a (7)    goto 27

	match 29


state 110
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61               goto 139
	0x62 - 0x7a (25)   goto 27

	match 29


state 111
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x7a (26)   goto 27

	match 13


state 112
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x6e (14)   goto 27
	0x6f               goto 140
	0x70 - 0x7a (11)   goto 27

	match 29


state 113
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x7a (26)   goto 27

	match 3


state 114
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x6d (13)   goto 27
	0x6e               goto 141
	0x6f - 0x7a (12)   goto 27

	match 29


state 115
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x6d (13)   goto 27
	0x6e               goto 142
	0x6f - 0x7a (12)   goto 27

	match 29


state 116
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x74 (20)   goto 27
	0x75               goto 143
	0x76 - 0x7a (5)    goto 27

	match 29


state 117
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x6d (13)   goto 27
	0x6e               goto 144
	0x6f - 0x7a (12)   goto 27

	match 29


state 118
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x74 (20)   goto 27
	0x75               goto 145
	0x76 - 0x7a (5)    goto 27

	match 29


state 119
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x73 (19)   goto 27
	0x74               goto 146
	0x75 - 0x7a (6)    goto 27

	match 29


state 120
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x64 (4)    goto 27
	0x65               goto 147
	0x66 - 0x7a (21)   goto 27

	match 29


state 121
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x63 (3)    goto 27
	0x64               goto 148
	0x65 - 0x7a (22)   goto 27

	match 29


state 122
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x6b (11)   goto 27
	0x6c               goto 149
	0x6d - 0x7a (14)   goto 27

	match 29


state 123
	0x6c               goto 150


state 124
	0x30 - 0x39 (10)   goto 124
	0x41 - 0x44 (4)    goto 53
	0x45               goto 97
	0x46 - 0x5a (21)   goto 53
	0x61 - 0x64 (4)    goto 53
	0x65               goto 97
	0x66 - 0x7a (21)   goto 53


state 125
	0x64               goto 126


state 126
	0x69               goto 151


state 127
	match 1


state 128
	0x2b               goto 100
	0x2d               goto 100
	0x64               goto 129


state 129
	0x69               goto 152


state 130
	0x41 - 0x5a (26)   goto 65
	0x5f               goto 65
	0x61 - 0x66 (6)    goto 65
	0x67               goto 153
	0x68 - 0x7a (19)   goto 65

	match 28


state 131
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x7a (26)   goto 27

	match 7


state 132
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x6a (10)   goto 27
	0x6b               goto 154
	0x6c - 0x7a (15)   goto 27

	match 29


state 133
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x7a (26)   goto 27

	match 9


state 134
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x7a (26)   goto 27

	match 5


state 135
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x68 (8)    goto 27
	0x69               goto 155
	0x6a - 0x7a (17)   goto 27

	match 29


state 136
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x6b (11)   goto 27
	0x6c               goto 156
	0x6d - 0x7a (14)   goto 27

	match 29


state 137
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x7a (26)   goto 27

	match 12


state 138
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x64 (4)    goto 27
	0x65               goto 157
	0x66 - 0x7a (21)   goto 27

	match 29


state 139
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x73 (19)   goto 27
	0x74               goto 158
	0x75 - 0x7a (6)    goto 27

	match 29


state 140
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x7a (26)   goto 27

	match 14


state 141
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x7a (26)   goto 27

	match 22


state 142
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x73 (19)   goto 27
	0x74               goto 159
	0x75 - 0x7a (6)    goto 27

	match 29


state 143
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x71 (17)   goto 27
	0x72               goto 160
	0x73 - 0x7a (8)    goto 27

	match 29


state 144
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x65 (5)    goto 27
	0x66               goto 161
	0x67 - 0x7a (20)   goto 27

	match 29


state 145
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x62 (2)    goto 27
	0x63               goto 162
	0x64 - 0x7a (23)   goto 27

	match 29


state 146
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x62 (2)    goto 27
	0x63               goto 163
	0x64 - 0x7a (23)   goto 27

	match 29


state 147
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x7a (26)   goto 27

	match 20


state 148
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x7a (26)   goto 27

	match 18


state 149
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x64 (4)    goto 27
	0x65               goto 164
	0x66 - 0x7a (21)   goto 27

	match 29


state 150
	0x75               goto 165


state 151
	0x67               goto 166


state 152
	0x67               goto 167


state 153
	0x41 - 0x5a (26)   goto 65
	0x5f               goto 65
	0x61 - 0x68 (8)    goto 65
	0x69               goto 168
	0x6a - 0x7a (17)   goto 65

	match 28


state 154
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x7a (26)   goto 27

	match 8


state 155
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x6d (13)   goto 27
	0x6e               goto 169
	0x6f - 0x7a (12)   goto 27

	match 29


state 156
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x64 (4)    goto 27
	0x65               goto 170
	0x66 - 0x7a (21)   goto 27

	match 29


state 157
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x7a (26)   goto 27

	match 21


state 158
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x7a (26)   goto 27

	match 4


state 159
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x65 (5)    goto 27
	0x66               goto 171
	0x67 - 0x7a (20)   goto 27

	match 25


state 160
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x6d (13)   goto 27
	0x6e               goto 172
	0x6f - 0x7a (12)   goto 27

	match 29


state 161
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x7a (26)   goto 27

	match 24


state 162
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x73 (19)   goto 27
	0x74               goto 173
	0x75 - 0x7a (6)    goto 27

	match 29


state 163
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x67 (7)    goto 27
	0x68               goto 174
	0x69 - 0x7a (18)   goto 27

	match 29


state 164
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x7a (26)   goto 27

	match 19


state 165
	0x64               goto 175


state 166
	0x69               goto 176


state 167
	0x69               goto 177


state 168
	0x41 - 0x5a (26)   goto 65
	0x5f               goto 65
	0x61 - 0x73 (19)   goto 65
	0x74               goto 178
	0x75 - 0x7a (6)    goto 65

	match 28


state 169
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x74 (20)   goto 27
	0x75               goto 179
	0x76 - 0x7a (5)    goto 27

	match 29


state 170
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x7a (26)   goto 27

	match 6


state 171
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x7a (26)   goto 27

	match 25


state 172
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x7a (26)   goto 27

	match 16


state 173
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x7a (26)   goto 27

	match 26


state 174
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x7a (26)   goto 27

	match 17


state 175
	0x65               goto 180


state 176
	0x74               goto 181


state 177
	0x74               goto 182


state 178
	0x41 - 0x5a (26)   goto 65
	0x5f               goto 65
	0x61 - 0x72 (18)   goto 65
	0x73               goto 65
	0x74 - 0x7a (7)    goto 65

	match 28


state 179
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x64 (4)    goto 27
	0x65               goto 183
	0x66 - 0x7a (21)   goto 27

	match 29


state 180
	0x3c               goto 184


state 181
	0x73               goto 185


state 182
	0x73               goto 186


state 183
	0x30 - 0x39 (10)   goto 27
	0x41 - 0x5a (26)   goto 27
	0x5f               goto 27
	0x61 - 0x7a (26)   goto 27

	match 10


state 184
	0x41 - 0x5a (26)   goto 187
	0x61 - 0x7a (26)   goto 187


state 185
	0x41 - 0x5a (26)   goto 53
	0x61 - 0x7a (26)   goto 53


state 186
	match 30


state 187
	0x00 - 0x09 (10)   goto 188
	0x0b - 0x3d (51)   goto 188
	0x3e               goto 189
	0x3f - 0x40 (2)    goto 188
	0x41 - 0x5a (26)   goto 190
	0x5b - 0x60 (6)    goto 188
	0x61 - 0x7a (26)   goto 190
	0x7b - 0xff (133)  goto 188


state 188
	0x68               goto 191


state 189
	0x68               goto 191

	match 27


state 190
	0x00 - 0x09 (10)   goto 188
	0x0b - 0x3d (51)   goto 188
	0x3e               goto 189
	0x3f - 0x40 (2)    goto 188
	0x41 - 0x5a (26)   goto 190
	0x5b - 0x60 (6)    goto 188
	0x61 - 0x67 (7)    goto 190
	0x68               goto 190
	0x69 - 0x7a (18)   goto 190
	0x7b - 0xff (133)  goto 188


state 191
	0x3e               goto 192


state 192
	match 27


#############################################################################
# Summary
#############################################################################

1 start state(s)
75 expression(s), 192 state(s)


#############################################################################
# End of File
#############################################################################
