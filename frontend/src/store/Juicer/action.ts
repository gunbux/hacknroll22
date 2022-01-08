import {Dispatch} from '../types'
import {ActionTypes, JUICER_ACTIONS} from './types'
import API from '../api'

export const onJuicer = () => async (dispatch: Dispatch<ActionTypes>) => {
  const res = await API.post("/on")
  dispatch({
    type: JUICER_ACTIONS.ON_JUICER
  })
}

export const offJuicer = () => async (dispatch: Dispatch<ActionTypes>) => {
  const res = await API.post("/off")
  dispatch({
    type: JUICER_ACTIONS.OFF_JUICER
  })
}