import {Dispatch} from '../types'
import {ActionTypes, JUICER_ACTIONS} from './types'
import API from '../api'

export const onJuicer = () => async (dispatch: Dispatch<ActionTypes>) => {
  const res = await API.get("/on")
  dispatch({
    type: JUICER_ACTIONS.ON_JUICER
  })
}

export const offJuicer = () => async (dispatch: Dispatch<ActionTypes>) => {
  const res = await API.get("/off")
  dispatch({
    type: JUICER_ACTIONS.OFF_JUICER
  })
}