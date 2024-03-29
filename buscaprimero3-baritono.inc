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
		R2*2  |
		g 8 ~ g g a  |
		b 4 g 8 f  |
%% 5
		e 4 e 8 f  |
		g 2  |
		a 4 a 8 a  |
		g 4 g 8 g  |
		g 2  |
%% 10
		b 4 r8 g  |
		g 8 g g a  |
		b 4 g 8 ~ g  |
		e 4 e 8 f  |
		g 4 g  |
%% 15
		a 4 b 8 a  |
		g 4 a 8 g  |
		b 4. ( c' 8 )  |
		c' 2  |
		g 8 ~ g g a  |
%% 20
		b 4 g 8 f  |
		e 8 e e f  |
		g 2  |
		a 4 b 8 a  |
		g 4 a 8 g  |
%% 25
		g 2  |
		b 4 r  |
		c' 2  |
		g 2  |
		a 2  |
%% 30
		e 2  |
		f 2  |
		c' 2  |
		b 2  |
		c' 2  |
		\bar "|."
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
