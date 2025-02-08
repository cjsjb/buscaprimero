\context Staff = "baritono" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Barítono"
	\set Staff.shortInstrumentName = "B."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-baritono" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble_8"
		\key c \major

		R1*2  |
		g 4 ~ g g a  |
		b 2 g 4 f  |
%% 5
		e 2 e 4 f  |
		g 1  |
		a 2 a 4 a  |
		g 2 g 4 g  |
		g 1  |
%% 10
		b 2 r4 g  |
		g 4 g g a  |
		b 2 g 4 ~ g  |
		e 2 e 4 f  |
		g 2 g  |
%% 15
		a 2 b 4 a  |
		g 2 a 4 g  |
		b 2. ( c' 4 )  |
		c' 1  |
		g 4 ~ g g a  |
%% 20
		b 2 g 4 f  |
		e 4 e e f  |
		g 1  |
		a 2 b 4 a  |
		g 2 a 4 g  |
%% 25
		g 1  |
		b 2 r  |
		c' 1  |
		g 1  |
		a 1  |
%% 30
		e 1  |
		f 1  |
		c' 1  |
		b 1  |
		c' 1  |
	}
	\new Lyrics \lyricsto "voz-baritono" {
		"Bus" __ "ca" "pri" -- "me" -- "ro" "el" "rei" -- "no" "de" "Dios"
		"y" "su" "jus" -- "ti" -- "cia" "di" -- "vi" -- "na,"
		"y" "to" -- "do" "se os" "da" -- "rá" "por" __ "a" -- "ña" -- "di" -- "du" -- "ra,"
		"¡A" -- "le" -- "lu" -- "ya," "a" -- "le" -- "lu" __ "ya!"

		"¡A" __ "le" -- "lu" -- "ya," "a" -- "le" -- "lu" -- "ya, a" -- "le" -- "lu" -- "ya,"
		"a" -- "le" -- "lu" -- "ya," "a" -- "le" -- "lu" -- "ya!"
		"¡A" -- "le" -- "lu" -- "ya," "a" -- "le" -- "lu" -- "ya!"
	 }
>>
