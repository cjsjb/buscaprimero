\context Staff = "sopranop" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano II"
	\set Staff.shortInstrumentName = "S.2"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "sopranop" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key c \major
		R1  |
		g' 4 g' 8 a' b' 4 g' 8 f'  |
		e' 4 e' 8 f' g' 2  |
		a' 4 b' 8 a' g' 4 a' 8 g'  |
%% 5
		g' 2 b' 4 r8 g'  |
		g' 8 g' g' a' b' 4 g' 8 g'  |
		e' 4 e' 8 f' g' 4 g'  |
		a' 4 b' 8 a' g' 4 a' 8 g'  |
		b' 4. c'' 8 c'' 2  |
%% 10
		R1*2  |
		g' 4 g' 8 a' b' 4 g' 8 f'  |
		e' 8 e' e' f' g' 2  |
		a' 4 b' 8 a' g' 4 a' 8 g'  |
%% 15
		g' 2 b' 4 r8 g'  |
		g' 8 g' g' a' b' 4 g' 8 g'  |
		e' 4 e' 8 f' g' 4 g'  |
		a' 4 b' 8 a' g' 4 a' 8 g'  |
		b' 4. c'' 8 c'' 2  |
%% 20
		R1  |
		\bar "|."
	}
	\lyricsto "sopranop" \new Lyrics \lyricmode {
		"Bus" -- "ca" "pri" -- "me" -- "ro" "el" "rei" -- "no" "de" "Dios"
		"y" "su" "jus" -- "ti" -- "cia" "di" -- "vi" -- "na,"
		"y" "to" -- "do" "se os" "da" -- "rá" "por" "a" -- "ña" -- "di" -- "du" -- "ra,"
		"¡A" -- "le" -- "lu" -- "ya," "a" -- "le" -- "lu" __ "ya!"
		"¡A" -- "le" -- "lu" -- "ya," "a" -- "le" -- "lu" -- "ya, a" -- "le" -- "lu" -- "ya,"
		"a" -- "le" -- "lu" -- "ya," "a" -- "le" -- "lu" -- "ya!"
		"Y" "to" -- "do" "se os" "da" -- "rá" "por" "a" -- "ña" -- "di" -- "du" -- "ra,"
		"¡A" -- "le" -- "lu" -- "ya," "a" -- "le" -- "lu" __ "ya!"
	 }
>>

