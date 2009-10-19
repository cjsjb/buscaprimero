        \context Staff = "tenor" << 
            \set Staff.instrumentName = "Tenor"
            \set Score.skipBars = ##t
            \set Staff.printKeyCancellation = ##f
            \new Voice \global
            \new Voice \globalTempo

            \context Voice = "tenor" {
                \override Voice.TextScript #'padding = #2.0                \override MultiMeasureRest #'expand-limit = 1

                \clef "treble"
                R1*2  |
                c'' 2 c'' 4 c''  |
                b' 2 b' 4 b'  |
%% 5
                a' 2 a' 4 a'  |
                g' 1  |
                a' 2 b' 4 a'  |
                g' 2 a' 4 g'  |
                g' 1  |
%% 10
                g' 2 a' 4 b'  |
                c'' 4 b' c'' c''  |
                b' 2 b' 4 g'  |
                a' 2 a' 4 a'  |
                g' 2 g'  |
%% 15
                a' 2 b' 4 a'  |
                g' 2 a' 4 g'  |
                g' 2. g' 4  |
                g' 1  |
                R1*3  |
                c'' 1  |
                b' 1  |
                a' 1  |
%% 25
                g' 1  |
                a' 1  |
                g' 1  |
                g' 1  |
                g' 2 a' 4 b'  |
%% 30
                c'' 1  |
                b' 1  |
                a' 1  |
                g' 1  |
                a' 1  |
%% 35
                g' 1  |
                b' 1  |
                c'' 1  |
                R1  |
                \bar "|."
            } % Voice
            \lyricsto "tenor" \new Lyrics \lyricmode {
                 "Bus-" "ca" "pri-" "-me-" "ro" "el" "rei-" "no" "de" "Dios" "y" "su" "jus-" "-ti-" "cia" "di-" "-vi-" "-na-" "a-" "a." "To-" "do" "se_os" "da-" "-rá" "po-" "or" "a-" "ña-" "di-" "-du-" "ra," "¡A-" "le-" "lu-" "-ya," "a-" "le" "-lu-" "u-" "ya!" "¡A-" "-le-" "-lu-" "-ya," "a-" "-le-" "-lu-" "-ya!" "¡A-" "a-" "-a-" "-le-" "-lu-" "-ya," "a-" "-le-" "-lu-" "-ya!" 
             } % Lyrics
        >> % Staff (final)

